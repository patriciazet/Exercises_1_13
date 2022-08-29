/*TODO:
Napisz analogiczna funkcje, ktora zwroci przemieszanego stringa (random_shuffle)
*/

#include <iostream>
#include <string>
#include <random>
#include <algorithm>

std::string inRandomOrder(std::string text)
{
    std::random_device randomDevice;
    std::mt19937 g(randomDevice());
    std::shuffle(text.begin(), text.end(), g);
    return text;
}

int main()
{
    std::cout << inRandomOrder("Alea iacta est") << std::endl;
}
