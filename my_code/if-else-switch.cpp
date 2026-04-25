#include <iostream>
using namespace std;

char grading(int score)
{
    if (score > 100)
        throw invalid_argument("ERROR! Scores must be under 100");
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

int main()
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
        cout << e.what() << endl;
    }

    
}