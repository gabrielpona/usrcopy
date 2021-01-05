#include <vector>

#include "SystemTools.h"

using namespace std;

SystemTools::SystemTools() {
}

SystemTools::SystemTools(const SystemTools& orig) {
}

SystemTools::~SystemTools() {
}

std::vector<char> SystemTools::driveList(){
    
    vector<char> ret;
    
    ret.push_back('C');
    ret.push_back('D');
    ret.push_back('E');
    
    return ret;
}


