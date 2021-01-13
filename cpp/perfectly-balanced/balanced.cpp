#include <iostream>
#include <array>

using namespace std;

int main(int argc, char *argv[]){

    if (argc == 1){
        cout << "Enter a series of letters\n";
        return 0;
    }
    
    string letters = argv[1];

    cout << letters << "\n";
    cout << letters.length() << "\n";


    
    return 0;
}