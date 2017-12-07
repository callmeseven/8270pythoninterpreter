#pragma once

//  Declarations for a calculator that builds an AST
//  and a graphical representation of the AST.
//  by Brian Malloy

#include <iostream>
#include <string>
#include <map>
#include "literal.h"

extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class IdentNode : public Node {
public:
  IdentNode(const std::string id) : Node(), ident(id) { } 
  virtual ~IdentNode() {}
  const std::string getIdent() const { return ident; }
  virtual const Literal* eval() const;
private:
  std::string ident;
};

class FuncNode : public Node { //#5
public:
	FuncNode(const std::string id, Node* stmts);
	virtual ~FuncNode() {}
	const std::string getIdent() const { return ident; }
	virtual const Literal* eval() const;
private:
	std::string ident;
	Node* suite;
};

class SuiteNode : public Node { //#5
public:
	SuiteNode(const std::vector<Node*> s) : Node(), stmts(s) { }
	virtual ~SuiteNode() {}
	virtual const Literal* eval() const;
private:
	std::vector<Node*> stmts;
};


class UnaryNode : public Node {
public:
  UnaryNode(Node* l):Node(),left(l) { }
  virtual const Literal* eval() const = 0;
  Node* getLeft() const { return left; }
  UnaryNode(const UnaryNode&) = delete;
  UnaryNode& operator=(const UnaryNode&) = delete;
protected:
  Node *left;
};

class PosUnaryNode : public UnaryNode {
public:
  PosUnaryNode(Node* left) : UnaryNode(left) {}
  virtual const Literal* eval() const;
};

class NegUnaryNode : public UnaryNode {
public:
  NegUnaryNode(Node* left) : UnaryNode(left) {}
  virtual const Literal* eval() const;
};


class BinaryNode : public Node {
public:
  BinaryNode(Node* l, Node* r) : Node(), left(l), right(r) {}
  virtual const Literal* eval() const = 0;
  Node* getLeft()  const { return left; }
  Node* getRight() const { return right; }
  BinaryNode(const BinaryNode&) = delete;
  BinaryNode& operator=(const BinaryNode&) = delete;
protected:
  Node *left;
  Node *right;
};

class AsgBinaryNode : public BinaryNode {
public:
  AsgBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class AddBinaryNode : public BinaryNode {
public:
  AddBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class SubBinaryNode : public BinaryNode {
public:
  SubBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class MulBinaryNode : public BinaryNode {
public:
  MulBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class DivBinaryNode : public BinaryNode {
public:
  DivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class PerBinaryNode : public BinaryNode {
public:
  PerBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class PowBinaryNode : public BinaryNode {
public:
  PowBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};
