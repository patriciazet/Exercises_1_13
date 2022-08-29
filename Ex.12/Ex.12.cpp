/*TODO:
12. Napisz funkcje, ktora zamieni podanego int na vector jej cyfr.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<char> intToVector(int number)
{
    std::string convertToString = std::to_string(number);
    std::vector<char> digits;

    auto convertionToDigits = [&digits](char& c)
    {
        return digits.push_back(c);
    };

    std::for_each(convertToString.begin(), convertToString.end(), convertionToDigits);
    return digits;
}

int main()
{
    std::vector<char> result = intToVector(2022);

    auto print = [](char x)
    {
        std::cout << x << ", ";
    };
    std::for_each(result.begin(), result.end(), print);
}