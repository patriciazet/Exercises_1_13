/*TODO:
Napisz funkcje, ktora przyjmuje stringa, nastepnie uszereguje wszystkie litery
w porzadku alfabetycznym i zwraca tak odwroconego stringa(sort)
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



std::string inAlphabeticalOrder(std::string text)
{
    std::sort(text.begin(), text.end(), [](int x, int y)
        {
            return x < y;
        });
    return text;
}

int main()
{
    std::cout << inAlphabeticalOrder("Alea iacta est") << std::endl;
}
