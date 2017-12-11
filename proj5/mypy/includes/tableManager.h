#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H

#include "symbolTable.h"
#include "functionTable.h"
#include <vector>

class TableManager {
public:
        static  TableManager& getInstance();

        const Literal*  getEntry(const std::string& name); // get from symboltable

        //const Node*     getSuite(const std::string& name); // get from function table

        void            insert(const std::string& name, const Literal* node);
        //void            insert(const std::string& name, const Node* node);

        bool    checkName(const std::string& name) const;
        //bool    checkFunc(const std::string& name) const;
	
	const int getScope() const {return currentScope;}
        void pushScope();
        void popScope();
        void display() const;


private:
        int currentScope;
        std::vector<SymbolTable> tables;

        TableManager() : currentScope(0), tables() {
                tables.push_back( SymbolTable() );
        }
};

#endif
