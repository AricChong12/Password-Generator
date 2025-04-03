#include <iostream>
#include <random>
#include <string>
#include <ctime>
#include <limits>
using namespace std;

void Asking();
void GeneratePassword(int);

int digits;
char permission;

int main(){
    
    srand(time(0));
    Asking();



    return 0;
}

void GeneratePassword(int digits){
    string characters = "1234567890qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM!#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    int length = characters.length();
    for(int i = 0; i < digits; i++){
        cout << characters[rand() % length];
    }
}

void Asking(){
    char tempPerm;

    do{
        cout << "Please enter the number of digits of password: ";
        cin >> digits;
        cout << endl;

        cout << "Here is your password: ";
        GeneratePassword(digits);
        cout << endl;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Do you wanna continue? (Y/N)";
        cin >> permission;
        tempPerm = toupper(permission);
        cout << endl;

        if((tempPerm == 'N' || tempPerm != 'N') && tempPerm != 'Y'){
            cout << "Thx you for using the password generator !";
            break;
        }

    }while(tempPerm == 'Y');
    
}