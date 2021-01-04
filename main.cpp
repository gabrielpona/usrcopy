#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <vector>

#include "lib/SystemTools.h"

using namespace std;

void mainMenu(SystemTools &systemTools){
    
    system("cls");
    
    cout << "Select the drive that contais the \"users\" directory:\n\n";
    
    char driveList[] = "CDE";
            
    for(int i=0;i<3;i++){
        
        cout << "\t\t\t[" << (i+1) << "]     Drive " << driveList[i] << ":\n";        
    }
    
    cout << "\n\t\tOr type\t[0]     to Exit\n"; 
    
    cin >> driveList;
    
            
}


int main(int argc, char** argv) {

    SystemTools systemTools = SystemTools();
    
    mainMenu(systemTools);
    
    
            
    return 0;
}

