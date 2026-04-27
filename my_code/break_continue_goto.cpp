#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

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

        // simple prompt loop — keep is used here as a tiny learning example
        keep:
        cout << "\nDo you want to continue your program (y/n):";
        string answer;
        cin >> answer;

        if (answer.empty())
            goto keep;

        if(std::tolower(static_cast<unsigned char>(answer[0])) == 'n')
            break;
        else if(std::tolower(static_cast<unsigned char>(answer[0])) == 'y' || std::tolower(static_cast<unsigned char>(answer[0])) == 's')
            continue;
        else
            goto keep;
        
    }
}