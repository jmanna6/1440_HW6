#include <iostream>
#include "Dictionary.h"



int main()
{
    char choice = ' ';
    Dictionary<int, std::string> dict;

    while (choice != 'q' && choice != 'Q')
    {
        std::cout << "c - Create a Dictionary"              << std::endl;
        std::cout << "a - Add a KeyValue Pair"              << std::endl;
        std::cout << "r - Remove a KeyValue Pair by index"  << std::endl;
        std::cout << "R - Remove a KeyValue Pair by key"    << std::endl;



        std::cout << "Enter key: ";
        std::cin >> choice;
    }
    return 0;
}