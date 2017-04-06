#include <iostream>
#include "Dictionary.h"

int main()
{
    std::cout << "Creating Dictionary<int, std::string>" << std::endl;
    Dictionary<int, std::string> dict;

    std::cout << "There are: " << dict.getCount() << " KeyValue pairs in the dictionary" << std::endl;

    std::cout << "Adding 10 elements to the Dictionary" << std::endl;
    for (unsigned int i = 0; i < 10; i++)
    {
        dict.add(i, "Initial adding");
    }

    std::cout << "\nThe current Dictionary: " << std::endl;
    dict.print();

    std::cout << "\nRemoving KeyValue pair at index 4" << std::endl;
    dict.removeByIndex(4);
    dict.print();

    std::cout << "\nRemoving KeyValue pair with key of 6" << std::endl;
    dict.removeByKey(6);
    dict.print();

    std::cout << "\nAdding 5 more KeyValue pairs to the Dictionary" << std::endl;
    for (unsigned int i = 0; i < 5; i++)
    {
        dict.add(i + 10, "Second adding");
    }

    std::cout << "\nThe Dictionary now: " << std::endl;
    dict.print();

    std::cout << "\nGetting the 5th KeyValue pair: ";
    dict.getByIndex(5).display();

    std::cout << "\nGetting the KeyValue pair with a key of 13: ";
    dict.getByKey(13).display();

    return 0;
}