#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

// Cost O(n)
float percentage(const std::vector<int> &subjects)
{
    for (std::size_t i = 0; i < subjects.size(); i++)
    {
        if (subjects[i] > 100)
            throw std::invalid_argument("ERROR! Scores must be under 100.");

        if (subjects[i] < 0)
            throw std::invalid_argument("ERROR! Scores must be a non-negative number.");
    }

    float totalMark = 100 * subjects.size();

    float obtainedMark = 0;
    for (std::size_t i = 0; i < subjects.size(); i++)
        obtainedMark += subjects[i];

    return (obtainedMark / totalMark) * 100;
}

std::string grading(float score)
{
    if (score > 100)
        throw std::invalid_argument("ERROR! Scores must be under 100.");

    if (score < 0)
        throw std::invalid_argument("ERROR! Scores must be a non-negative number.");

    if (score >= 90 && score <= 100)
        return "A+";

    else if (score >= 80)
        return "A";

    else if (score >= 70)
        return "B";

    else if (score >= 60)
        return "C";

    else if (score >= 50)
        return "D";

    return "F";
}

int main()
{
    int numberOfSubjects;
    std::cout << "How many subjects are: ";
    std::cin >> numberOfSubjects;

    std::vector<int> subjects(numberOfSubjects);
    std::cout << "Enter your subject marks: ";
    for (int i = 0; i < subjects.size(); i++)
        std::cin >> subjects[i];

    float obtainedMark;
    try
    {
        obtainedMark = percentage(subjects);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    try
    {
        std::cout << "Grade " << grading(obtainedMark) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}