/*TODO:
 Napisz funkcje, ktora przyjmuje dwa stringi a nastepnie zwraca vector
 ich wspolnych liter(powtarzajcych sie w obu stringach).
*/

#include <iostream>
#include <algorithm>
#include <vector>

std::vector<char> commonLetters(std::string a, std::string b)
{
    std::vector<char> vect;
    std::copy_if(a.begin(), a.end(), std::back_inserter(vect), [&vect, &b](char x)
        {
            for (int i = 0; i < b.size(); ++i)
            {
                if (x == b[i])
                {
                    return x;
                }
            }
        }
    );
    return vect;
}

int main()
{
    std::vector<char> commonLettersCaptured = commonLetters("Japan", "China");

    for (int i = 0; i < commonLettersCaptured.size(); ++i)
    {
        std::cout << commonLettersCaptured[i];
    }
}