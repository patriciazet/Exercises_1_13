/*TODO:
8. Zmien poprzednie zadanie tak, aby zwracalo sume kwadratow(accumulate).
*/

#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

auto squarePowerSum(int x, int y)
{
    std::vector<int> vect((y - x) + 1);
    std::iota(vect.begin(), vect.end(), x);
    std::for_each(vect.begin(), vect.end(), [](int& x) { return x *= x; });
    auto sum = std::accumulate(vect.begin(), vect.end(), 0);
    return sum;
}

int main()
{
    std::cout << squarePowerSum(8, 6);
}