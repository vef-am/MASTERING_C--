#include <iostream>
#include <typeinfo>
#include <string>
#include <cctype>
#include <stdexcept>
#include <limits>
using namespace std;

void info()
{
    cout << "Select the function to try:" << endl
         << "1. Grading function" << endl
         << "2. Withdrawal function" << endl
         << "3. Result grading function" << endl
         << "To end, write '0'" << endl;
}

char grading(int score)
{
    if (score > 100)
        throw invalid_argument("ERROR! Scores must be under 100.");

    if (score < 0)
    {
        throw invalid_argument("ERROR! Scores must be a non-negative number.");
    }

    else if (score >= 90 && score <= 100)
        return 'A';

    else if (score >= 80)
        return 'B';

    else if (score >= 70)
        return 'C';

    else if (score >= 60)
        return 'D';

    return 'F';
}

double withdrawalBalance(double balance, double withdrawal)
{
    if (withdrawal > balance)
        throw invalid_argument("Insufficient funds. Withdrawal not possible.");
    else
    {
        cout << "Withdrawal succesful" << endl;
        return balance - withdrawal;
    }
}

string resultGrading(char grade)
{
    switch (grade)
    {
    case 'A':
        return "Excellent!";
        break;
    case 'B':
        return "Nice done!";
        break;
    case 'C':
        return "Well done.";
        break;
    case 'D':
        return "You passed.";
        break;
    case 'F':
        return "You failed.";
        break;
    default:
        throw invalid_argument("Invalid grade.");
        break;
    }
}

int main()
{
    int selection = -1;

    while (selection != 0)
    {
        switch (selection)
        {
        case 1:
        {
        question1:
            string answer;
            cout << "You chose grading function, is that correct? (Y/N): ";
            cin >> answer;

            if(answer.empty())
                goto question1;

            if(std::tolower(static_cast<unsigned char>(answer[0])) == 'y' || std::tolower(static_cast<unsigned char>(answer[0])) == 's')
            {
                int score;

                cout << "Enter the score: ";
                cin >> score;

                try
                {
                    cout << "Grade: " << grading(score) << endl;
                }
                catch (const exception &e)
                {
                    cerr << e.what() << endl;
                    return 1;
                }

                selection = -1;
            }

            else if(std::tolower(static_cast<unsigned char>(answer[0])) == 'n')
                goto selection;

            else
                goto question1;

            break;
        }

        case 2:
        {
        question2:
            string answer;
            cout << "You chose withdrawal function, is that correct? (Y/N): ";
            cin >> answer;

            if(answer.empty())
                goto question2;

            if(std::tolower(static_cast<unsigned char>(answer[0])) == 'y' || std::tolower(static_cast<unsigned char>(answer[0])) == 's')
            {
                double balance;
                cout << "Enter your current balance: $ ";
                cin >> balance;

                double withdrawal;
                cout << "Enter your desired amount you want to withdrawal: $ ";
                cin >> withdrawal;

                try
                {
                    double leftBalance = withdrawalBalance(balance, withdrawal);
                    cout << "Amount left: $ " << leftBalance << endl;
                }
                catch (const exception &e)
                {
                    cerr << e.what() << endl;
                    return 1;
                }

                selection = -1;
            }

            else if(std::tolower(static_cast<unsigned char>(answer[0])) == 'n')
                goto selection;

            else
                goto question2;

            break;
        }

        case 3:
        {
        question3:
            string answer;
            cout << "You chose result grading function, is that correct? (Y/N): ";
            cin >> answer;

            if(answer.empty())
                goto question3;

            if(std::tolower(static_cast<unsigned char>(answer[0])) == 'y' || std::tolower(static_cast<unsigned char>(answer[0])) == 's')
            {
                char grade;
                cout << "Write your grade (A, B, C, D, F): ";
                cin >> grade;

                try
                {
                    cout << "Your grade is: " << resultGrading(grade) << endl;
                }
                catch (const exception &e)
                {
                    cerr << e.what() << endl;
                    return 1;
                }

                selection = -1;
            }

            else if(std::tolower(static_cast<unsigned char>(answer[0])) == 'n')
                goto selection;

            else
                goto question3;

            break;
        }

        default:
        selection:
            selection = -1;
            cout << string(20, '-') << endl;
            info();
            cin >> selection;
            if(!cin){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                goto selection;
            }
            break;
        }
    }
}