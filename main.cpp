#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <vector>

#include "lib/SystemTools.h"

using namespace std;

void selectFolderMenu(SystemTools &systemTools,char selectedDrive){
    char opt = ' ';
    do{
        system("cls");        
        cout << "Select the folder that contais the \"users\" directory:\n";
        cout << "Drive " << selectedDrive << ":\n";
        
        
            cout << "\t\t\t[1]     windows\n";        
            cout << "\t\t\t[2]     Appdata\n";
            cout << "\t\t\t[3]     Users\n";
            cout << "\t\t\t[4]     Program Files\n";
       
    
        cout << "\n\t\tOr type\t[0]     to return.\n"; 
        cout << "->";
        opt = getchar();
    
    }while (opt !='0');    
}

void mainMenu(SystemTools &systemTools){
                    
    char driveList[] = "CDE";
    char opt = ' ';
    bool stop = false;
    
    do{
        system("cls");
        cout << "Select the drive that contais the \"users\" directory:\n\n";
        for(int i=0;i<3;i++){
        
            cout << "\t\t\t[" << (i+1) << "]     Drive " << driveList[i] << ":\n";        
        }
    
        cout << "\n\t\tOr type\t[0]     to quit.\n"; 
        cout << "->";
        opt = getchar();
        
        
        if((opt-48) <=3 && (opt-48)>0){
                        
            selectFolderMenu(systemTools,driveList[(int)opt-49]);
            
        }else{
            if(opt=='0'){
                stop=true;
            }
        }
                                           
    }while (!stop);                                                          
            
}


int main(int argc, char** argv) {

    SystemTools systemTools = SystemTools();
    
    mainMenu(systemTools);
    
    
            
    return 0;
}

