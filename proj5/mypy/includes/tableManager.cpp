#include <iostream>
#include "ast.h"
#include "symbolTable.h"
#include "tableManager.h"

// get instance


TableManager& TableManager::getInstance() {
	static TableManager instance;
	return instance;
}

// get symbol entry value, return as Literal* 
const Literal* 	TableManager::getEntry(const std::string& name){
	return tables.back().getValue(name);
}

// get Function Suite, return as Node*
const Node*	TableManager::getSuite(const std::string& name){
	return functions.back().getSuite(name);
}

// insert into symbol table
void 	TableManager::insert_l(const std::string& name, const Literal* node){
		tables.back().setValue(name, node);
}

// insert into function table
void 	TableManager::insert_n(const std::string& name, const Node* node){
		functions.back().setSuite(name, node);
}

// check if symbol is in Symbol table
bool	TableManager::checkName(const std::string& name) const {
		return tables.back().found(name);
}

// check if function is in function table
bool	TableManager::checkFunc(const std::string& name) const {
		return functions.back().found(name);
}

void	TableManager::pushScope() {
		std::cout << "pushscope" << std::endl;
		tables.push_back( SymbolTable() );
		functions.push_back( FunctionTable() );
}

void	TableManager::popScope() {
		std::cout << "popscope" << std::endl;
		tables.pop_back();
		functions.pop_back();
}

//void	TableManager::display() {
//
//}
