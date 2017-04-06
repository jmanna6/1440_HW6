//
// Created by Jake on 4/3/2017.
//

#include "DictionaryTester.h"
#include "KeyValueTester.h"

#include <iostream>

int main()
{
    DictionaryTester dt;
    KeyValueTester kvt;


    dt.testCreate();
    std::cout << std::endl;
    dt.testCreate2();
    std::cout << std::endl;
    dt.testAdd();
    std::cout << std::endl;
    dt.testRemoveByIndex();
    std::cout << std::endl;
    dt.testRemoveByIndex2();
    std::cout << std::endl;

    dt.testRemoveByKey();
    std::cout << std::endl;
    dt.testRemoveByKey2();
    std::cout << std::endl;
    dt.testGetByKey();
    std::cout << std::endl;

    dt.testGetByIndex();
    std::cout << std::endl;
    dt.testBracketOperator();
    std::cout << std::endl;

    kvt.testGetKey();
    std::cout << std::endl;
    kvt.testGetValue();
    std::cout << std::endl;
    kvt.testDisplay();
    std::cout << std::endl;
    kvt.testDisplay2();
    std::cout << std::endl;


    return 0;
}
