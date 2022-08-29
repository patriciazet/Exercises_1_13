/*TODO:
5. Napisz funkcje, ktora zliczy wystapienia podanej litery w podanym stringu(count).
*/

#include <iostream>
#include <algorithm>


int countLetterGiven(std::string str, char c)
{
    int counter = std::count_if(str.begin(), str.end(), [c](char x) {return x == c; });
    return counter;
}

int main()
{
    std::string str = "Alea iacta est";
    char x = 'a';
    int counter = countLetterGiven(str, 'A');
    std::cout << counter;
}
