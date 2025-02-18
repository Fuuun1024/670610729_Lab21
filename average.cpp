#include <iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[]){
    double sum = 0;
    double member = argc-1;
    
    if(argc > 1){
    
    for(int i = 0; i < member ; i++){
        sum += atoi( argv[i+1] );
    }
    double Average = sum/member;
    cout << "---------------------------------\n";
    cout << "Average of "<< member <<" numbers = " << Average << endl;
    cout << "---------------------------------";
    
    }
    
    else cout << "Please input numbers to find average.";
    
    return 0;
}

