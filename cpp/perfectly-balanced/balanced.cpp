#include <iostream>
#include <array>

using namespace std;

int main(int argc, char *argv[]){

    if (argc == 1){
        cout << "Enter a series of letters\n";
        return 0;
    }
    
    string letters = argv[1];
    int len = letters.length();

    int x = 0;
    int y = 0;

    for (int i = 0; i < len; i++){
        if (letters[i] == 'x'){
            x++;
        }
        else if (letters[i] == 'y'){
            y++;
        }
        else{
            return 0;
        }
    }


    
    return 0;
}