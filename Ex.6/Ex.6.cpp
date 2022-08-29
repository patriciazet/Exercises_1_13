/*TODO:
 Napisz funkcje, ktora sprawdzi czy podany string jest palindromem(reverse i transform lub equal).
*/

#include <iostream>
#include <algorithm>

bool isPalindrom(std::string str)
{
    std::string str2 = str;
    std::reverse(str2.begin(), str2.end());

    return std::equal(str.begin(), str.end(), str2.begin(), str2.end());
}

int main()
{
    std::cout << isPalindrom("Aleksandra") << std::endl;
}
