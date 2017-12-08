#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H

#include <iostream>
#include <string>
#include <vector>
#include "symbolTable.h"
#include "functionTable.h"

class TableManager {
public:
	static 	TableManager& getInstance();

	const Literal* 	getEntry(const std::string& name); // get from symboltable

	const Node* 	getSuite(const std::string& name); // get from function table

	void 		insert_l(const std::string& name, const Literal* node);
	void 		insert_n(const std::string& name, const Node* node);

	bool	checkName(const std::string& name) const;
	bool	checkFunc(const std::string& name) const;

	void pushScope();
	void popScope();
	void display() const;


private:
	int currentScope;
	std::vector<SymbolTable> tables;
	std::vector<FunctionTable> functions;
	
	TableManager() : currentScope(0), tables(), functions() {
		tables.push_back( SymbolTable() );
		functions.push_back( FunctionTable() );
	}
};

#endif
