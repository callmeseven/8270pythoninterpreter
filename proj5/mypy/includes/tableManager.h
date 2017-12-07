#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H

#include <iostream>
#include <string>
#include <vector>
#include "symbolTable.h"

class TableManager {
public:
	static 	TableManager& getInstance();
	Node* 	getEntry(const std::string& name);
	void 	insert(const std::string& name, Node* node);
	bool	checkName(const std::string& name) const;

	void pushScope();
	void popScope();

private:
	int currentScope;
	std::vector<SymbolTable> tables;
	
	TableManager() : currentScope(0), tables() {
		tables.push_back( SymbolTable() );
	}
};

#endif
