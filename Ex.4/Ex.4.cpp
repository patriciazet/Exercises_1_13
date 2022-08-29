/*TODO:
Napisz funkcje, ktora usunie spacje z podanego stringa.
Zadanie wykonaj na dwoch kontenerach : vector i list(remove i erase).
*/

#include <iostream>
#include <string>
#include <vector>

void withoutWhiteSpaces(std::string& str)
{
	str.erase(std::remove_if(str.begin(), str.end(), [](char x) {return x == ' '; }), str.end());
}

int main()
{
	std::string sentence = "Alea iacta est";
	withoutWhiteSpaces(sentence);
	std::cout << sentence << std::endl;
}