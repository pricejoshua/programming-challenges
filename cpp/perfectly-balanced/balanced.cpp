#include <iostream>
#include <array>

using namespace std;

int balanced(string str, int len){
    int x = 0;
    int y = 0;

    for (int i = 0; i < len; i++){
        if (str[i] == 'x'){
            x++;
        }
        else if (str[i] == 'y'){
            y++;
        }
        else{
            return 0;
        }
    }

    if (x==y){
        return true;
    }else{
        return false;
    }
}

int main(int argc, char *argv[]){

    if (argc == 1){
        cout << "Enter a series of letters\n";
        return 0;
    }
    
    string letters = argv[1];
    int len = letters.length();

    int isBalanced = balanced(letters, len);
    cout << isBalanced;
    
    return 0;
}

