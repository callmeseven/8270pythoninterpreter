#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"


const Literal* ReturnNode::eval() const {
  if ( right != NULL ){
	const Literal* res = right->eval();
	TableManager::getInstance().insert("return", res);
	//std::cout << "return statement" << std::endl;
	return res;
	}
  else {
	//std::cout << "return statement" << std::endl;
	const Literal* res = new IntLiteral(19920123);
	TableManager::getInstance().insert("return", res);
	return res;
  	}
}


const Literal* PrintNode::eval() const {
  if(toPrint->eval()->getValue() == 19920123){
	toPrint->eval()->print();
	return nullptr;}
  else{
  toPrint->eval()->print();
  }
  return nullptr;
}

const Literal* SuiteNode::eval() const {
  std::vector<Node*>::const_iterator ptr = stmts.begin();
  
  while( ptr != stmts.end() ){
    if(*ptr){
       (*ptr)->eval();
    }
    ++ptr;
  }
//  std::cout << "suite executed. " << std::endl;
//  delete ptr;
  return nullptr;
}


const Literal* CallNode::eval() const{
	TableManager& tm = TableManager::getInstance();
	FunctionTable& ft = FunctionTable::getInstance();

	tm.pushScope();
	ft.getSuite(ident)->eval();
	tm.popScope();
	
	return nullptr;
}
	

const Literal* IfNode::eval() const {
//  std::cout << "if node" << std::endl;
  const Literal* t = test->eval();
  float f = t->getValue();
  if(f){
	left->eval();
        }
  else{
        if(right !=NULL){
                right->eval();
   }
    return NULL;
  }
}









//------------------------------------------

const Literal* IdentNode::eval() const { 
  const Literal* val = TableManager::getInstance().getEntry(ident);
  return val;
}

const Literal* PosUnaryNode::eval() const{
  if(!left){
	throw "error";
	}
  const Literal* x = left->eval();
  return x;
}

const Literal* NegUnaryNode::eval() const{
  if(!left){
	throw "error";
	}
  const Literal* x = left->eval();
  const Literal* y = left->eval();
  return (*((*y)-(*x)))-(*x);
}


AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, res);
}


const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insert(n, res);
  return res;
}

const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  //return (*x+*y);
  return (*x).operator+(*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}

const Literal* PerBinaryNode::eval() const {
  if (!left || !right) {
     throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}

const Literal* PowBinaryNode::eval() const {
  if(!left || !right) { throw "error"; }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)^(*y));
}

const Literal* LessBinaryNode::eval() const {
  if(!left || !right) {throw "error"; }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  Literal* t = new IntLiteral(1);
  Literal* f = new IntLiteral(0);
  if( x->getValue() < y->getValue() ){
	return t;}
  else return f;
}

const Literal* GreaterBinaryNode::eval() const {
  if(!left || !right) {throw "error"; }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  Literal* t = new IntLiteral(1);
  Literal* f = new IntLiteral(0);
  if( x->getValue() > y->getValue() ){
        return t;}
  else return f;
}

const Literal* EqEqBinaryNode::eval() const {
  if(!left || !right) {throw "error"; }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  Literal* t = new IntLiteral(1);
  Literal* f = new IntLiteral(0);
  if( x->getValue() == y->getValue() ){
        return t;}
  else return f;

}
const Literal* NotEqBinaryNode::eval() const {
  if(!left || !right) {throw "error"; }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  Literal* t = new IntLiteral(1);
  Literal* f = new IntLiteral(0);
  if( x->getValue() != y->getValue() ){
        return t;}
  else return f;

}
const Literal* GreaterEqBinaryNode::eval() const {
  if(!left || !right) {throw "error"; }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  Literal* t = new IntLiteral(1);
  Literal* f = new IntLiteral(0);
  if( x->getValue() >= y->getValue() ){
        return t;}
  else return f;
}
const Literal* LessEqBinaryNode::eval() const {
  if(!left || !right) {throw "error"; }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  Literal* t = new IntLiteral(1);
  Literal* f = new IntLiteral(0);
  if( x->getValue() <= y->getValue() ){
        return t;}
  else return f;
}

