#ifndef FUNCTIONTABLE__H
#define FUNCTIONTABLE__H

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

class Node;

class FunctionTable {
public:
	static FunctionTable& getInstance();

        bool    found(const std::string& name) const;

        void    setSuite(const std::string& name, const Node* suite);

  const Node*   getSuite(const std::string& name) const;

        void    display() const; 


private:
        std::map<std::string, const Node*> functions;
	FunctionTable() : functions(){}
};

#endif

