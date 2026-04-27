#include <iostream>
using namespace std;

int main(){
    while(true){

        int number;

        cout << "Enter a number: ";
        cin >> number;

        cout << "Multiplication table of " << number << ":\n";
        int i = 1;

        do{
            cout << number << " x " << i << " = " << number * i << endl;
            i++;
        } while (i <= 10);

        keep:
        cout << "\nDo you want to continue your program (y/n):";
        string answer;
        cin >> answer;

        if(tolower(answer[0]) == 'n')
            break;
        else if(tolower(answer[0]) == 'y' || tolower(answer[0]) == 's')
            continue;
        else
            goto keep;
        
        
    }
}