#include <map>
#include <algorithm>
#include "functionTable.h"
#include "node.h"

  FunctionTable& FunctionTable::getInstance() {
		static FunctionTable instance;
		return instance;
  		
}	

  bool          FunctionTable::found(const std::string& name) const {
                std::map<std::string, const Node*>::const_iterator it =
                        functions.find(name);
                if( it == functions.end() )
                        return false;
                else
                        return true;
                }


  const Node*   FunctionTable::getSuite(const std::string& name) const {
                std::map<std::string, const Node*>::const_iterator it =
                        functions.find(name);
                if ( it == functions.end() )
                        throw name+std::string(" not found");
                return it->second;
                }


  void          FunctionTable::setSuite(const std::string& name, const Node* suite) {
                        functions[name] = suite;
                }


  void 		FunctionTable::display() const {
			std::map<std::string, const Node*>::const_iterator ptr = functions.begin();
			while( ptr != functions.end() ){
				std::cout << ptr->first << std::endl;
				++ptr;
			}
		}
