#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::invalid_argument;
using std::exception;

void info()
{
    cout << "Select the pattern to try:" << endl
         << "1. Diamond pattern" << endl
         << "2. Square pattern" << endl
         << "3. Pyramid pattern" << endl
         << "4. Inversed pyramid pattern" << endl
         << "To end, write '0'" << endl;
}

// Makes a square pattern
/*
    ****
    *  *
    ****

    *****
    *   *
    *   *
    *****
*/
void squarePattern(int squareSize)
{
    if (squareSize < 0)
        throw invalid_argument("ERROR! Size must be a non-negative number.");

    for (int i = 0; i < squareSize; i++)
    {
        if (i == 0 || i == squareSize - 1)
        {
            for (int j = 0; j < squareSize; j++)
                cout << '*';
        }
        else
        {
            cout << '*';

            for (int j = 1; j < squareSize - 1; j++)
                cout << ' ';

            cout << '*';
        }

        cout << endl;
    }
}

// Makes a pyramid pattern
void pyramidPattern(int pyramidSize)
{
    if (pyramidSize < 0)
        throw invalid_argument("ERROR! Size must be a non-negative number.");

    for (int i = 1; i <= pyramidSize; i++)
    {
        for (int j = 1; j <= pyramidSize - i; j++)
            cout << ' ';

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << '*';

        cout << endl;
    }
}

// Makes an inversed pyramid pattern
void inversedPyramidPattern(int inversedPyramidSize)
{
    if (inversedPyramidSize < 0)
        throw invalid_argument("ERROR! Size must be a non-negative number.");

    for (int i = inversedPyramidSize; i > 0; i--)
    {
        for (int j = 1; j <= inversedPyramidSize - i; j++)
            cout << ' ';

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << '*';

        cout << endl;
    }
}

// Makes a diamond pattern
/*
 -  *
 - ***
 -*****
 - ***
 -  *
 */
void diamondPattern(int diamondSize)
{
    if (diamondSize < 0)
        throw invalid_argument("ERROR! Size must be a non-negative number.");

    // Upper half
    pyramidPattern(diamondSize);

    // Lower half
    for (int i = diamondSize - 1; i > 0; i--)
    {
        for (int j = 1; j <= diamondSize - i; j++)
            cout << ' ';

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << '*';

        cout << endl;
    }

    /*
        Why this decision?
        Because the upper half of the diamond pattern is the same as the pyramid pattern
        so there is no need to repeat code
    */

    /* ---- OLD: ----
    // Upper half
    for (int i = 1; i <= diamondSize; i++)
    {
        for (int j = 1; j <= diamondSize - i; j++)
            cout << ' ';

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << '*';

        cout << endl;
    }
    
    // Lower half
    for (int i = diamondSize - 1; i > 0; i--)
    {
        for (int j = 1; j <= diamondSize - i; j++)
            cout << ' ';

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << '*';

        cout << endl;
    }
    */
}

int main()
{
    int selection = -1;
    info();
    cin >> selection;

    while (selection != 0)
    {
        switch (selection)
        {
        case 1:
            int diamondSize;
            cout << "Enter the number of rows for the diamond pattern: " << endl;
            cin >> diamondSize;

            try
            {
                diamondPattern(diamondSize);
            }
            catch (const exception &e)
            {
                std::cerr << e.what() << endl;
                return 1;
            }

            selection = -1;
            break;

        case 2:
            int squareSize;
            cout << "Enter the size of the square pattern: " << endl;
            cin >> squareSize;

            try
            {
                squarePattern(squareSize);
            }
            catch (const exception &e)
            {
                std::cerr << e.what() << endl;
                return 1;
            }

            selection = -1;
            break;

        case 3:
            int pyramidSize;
            cout << "Enter the size of the pyramid pattern: " << endl;
            cin >> pyramidSize;

            try
            {
                pyramidPattern(pyramidSize);
            }
            catch (const exception &e)
            {
                std::cerr << e.what() << endl;
                return 1;
            }

            selection = -1;
            break;

        case 4:
            int inversedPyramidSize;
            cout << "Enter the size of the inversed pyramid pattern: " << endl;
            cin >> inversedPyramidSize;

            try
            {
                inversedPyramidPattern(inversedPyramidSize);
            }
            catch (const exception &e)
            {
                std::cerr << e.what() << endl;
                return 1;
            }

            selection = -1;
            break;

        default:
            cout << string(20, '-') << endl;
            info();
            cin >> selection;
            if(!cin){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            break;
        }
    }
}