#include <iostream>
#include <array>
#include <algorithm> // for std::sort
 
int main()
{
    std::array<int, 5> myarray { 7, 3, 9, 5 };
 
     std::cout << myarray.at(3) << "\n";
     std::cout << myarray.size() << "\n";
     std::cout << myarray.begin() << "\n";

    std::sort(myarray.begin(), myarray.end()); // sort the array forwards
    for (const auto &element : myarray)
        std::cout << element << ' ';
        std::cout << "\n ";

    std::sort(myarray.rbegin(), myarray.rend()); // sort the array backwards
     for (const auto &element : myarray)
        std::cout << element << ' ';
        std::cout << "\n ";

    return 0;
}
