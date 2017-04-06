//
// Created by Jake on 4/3/2017.
//

#include <iostream>

#include "KeyValueTester.h"
#include "../KeyValue.h"

void KeyValueTester::testGetKey()
{
    std::cout << "KeyValue getKey() Tester:" << std::endl;
    KeyValue<std::string, std::string> kv("key", "value");
    std::string expected = "key";
    std::string result = kv.getKey();

    if (result == expected)
    {
        std::cout << "Passed" << std::endl;
    }
    else
    {
        std::cout << "Failed\t Got " << result << " instead of " << expected << std::endl << std::endl;
    }
}

void KeyValueTester::testGetValue()
{
    std::cout << "KeyValue getValue() Tester:" << std::endl;
    KeyValue<std::string, std::string> kv("key", "value");
    std::string expected = "value";
    std::string result = kv.getValue();

    if (result == expected)
    {
        std::cout << "Passed" << std::endl;
    }
    else
    {
        std::cout << "Failed\t Got " << result << " instead of " << expected << std::endl << std::endl;
    }
}

void KeyValueTester::testDisplay()
{
    std::cout << "KeyValue display() Tester:" << std::endl;
    std::string expected = "Key, Value";
    KeyValue<std::string, std::string> kv("Key", "Value");


    std::cout << "Expected: \n\t" << expected << std::endl;
    std::cout << "Result: \n\t";
    kv.display();

}

void KeyValueTester::testDisplay2()
{
    std::cout << "KeyValue display() Tester2:" << std::endl;
    std::string expected = "10, Value";
    KeyValue<int, std::string> kv(10, "Value");


    std::cout << "Expected: \n\t" << expected << std::endl;
    std::cout << "Result: \n\t";
    kv.display();

}

