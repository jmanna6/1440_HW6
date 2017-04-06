//
// Created by Jake on 4/3/2017.
//

#include "DictionaryTester.h"
#include "../Dictionary.h"

void DictionaryTester::testCreate()
{
    std::cout << "Dictionary Dictionary() Tester:" << std::endl;
    Dictionary<int, int> dict;
    int expectedCount = 0;
    int resultCount = dict.getCount();

    int expectedSize = 10;
    int resultSize = dict.getSize();

    if (expectedCount == resultCount && expectedSize == resultSize)
    {
        std::cout << "Passed" << std::endl;
    }
    else
    {
        std::cout << "Failed" << std::endl;
        std::cout << "\tExpected \t Result" <<std::endl;
        std::cout << "Count \t" << expectedCount << "\t" << resultCount << std::endl;
        std::cout << "Size  \t" << expectedSize << "\t" << resultSize << std::endl;
    }
}

void DictionaryTester::testCreate2()
{
    std::cout << "Dictionary Dictionary() Tester2:" << std::endl;
    Dictionary<int, int> dict(100);
    int expectedCount = 0;
    int resultCount = dict.getCount();

    int expectedSize = 100;
    int resultSize = dict.getSize();

    std::cout << "Passed" << std::endl;

    /*
    std::cout << "\tExpected \t Result" <<std::endl;
    std::cout << "Count " << expectedCount << "\t" << resultCount << std::endl;
    std::cout << "Size  " << expectedSize << "\t" << resultSize << std::endl;
    */
}

void DictionaryTester::testAdd()
{
    std::cout << "Dictionary add() Tester:" << std::endl;
    Dictionary<int, std::string> dict;
    for (int i = 0; i < 11; i++)
    {
        dict.add(i + 1, "added");
    }

    dict.print();

    std::cout << "Count: " << dict.getCount() <<std::endl;
    std::cout << "Size: " << dict.getSize() <<std::endl;
}

void DictionaryTester::testRemoveByIndex()
{
    std::cout << "Dictionary removeByIndex() Tester:" << std::endl;

    Dictionary<int, int> dict;
    for (int i = 0; i < 5; i++)
    {
        dict.add(i + 1, i);
    }

    std::cout << "Prior to removal: " << std::endl;
    dict.print();
    std::cout << "After removal of index 1:" << std::endl;

    try
    {
        dict.removeByIndex(1);
    }
    catch (std::string e)
    {
        std::cout << e << std::endl;
    }

    dict.print();
}

// Testing Exception
void DictionaryTester::testRemoveByIndex2()
{
    std::cout << "Dictionary removeByIndex() Tester:" << std::endl;

    Dictionary<int, int> dict;
    for (int i = 0; i < 5; i++)
    {
        dict.add(i + 1, i);
    }

    std::cout << "Prior to removal: " << std::endl;
    dict.print();
    std::cout << "After removal of index 9:" << std::endl;

    try
    {
        dict.removeByIndex(9);
    }
    catch (std::string e)
    {
        std::cout << e << std::endl;
    }

    dict.print();
}

void DictionaryTester::testRemoveByKey()
{
    std::cout << "Dictionary removeByKey() Tester:" << std::endl;

    Dictionary<int, int> dict;
    for (int i = 0; i < 5; i++)
    {
        dict.add(i + 1, i);
    }

    std::cout << "Prior to removal: " << std::endl;
    dict.print();
    std::cout << "After removal of key 1:" << std::endl;

    try
    {
        dict.removeByKey(1);
    }
    catch (std::string e)
    {
        std::cout << e << std::endl;
    }

    dict.print();
}

// Testing Exception
void DictionaryTester::testRemoveByKey2()
{
    std::cout << "Dictionary removeByKey() Tester2:" << std::endl;

    Dictionary<int, int> dict;
    for (int i = 0; i < 5; i++)
    {
        dict.add(i + 1, i);
    }

    std::cout << "Prior to removal: " << std::endl;
    dict.print();
    std::cout << "After removal of key 7:" << std::endl;

    try
    {
        dict.removeByKey(7);
    }
    catch (std::string e)
    {
        std::cout << e << std::endl;
    }

    dict.print();
}

void DictionaryTester::testBracketOperator()
{
    std::cout << "Dictionary operator[] Tester:" << std::endl;
    Dictionary<int, std::string> dict;
    for (int i = 0; i < 10; i++)
    {
        dict.add(i + 1, "added");
    }

    KeyValue<int, std::string>& result = dict[3];
    result.display();
}

void DictionaryTester::testGetByIndex()
{
    std::cout << "Dictionary getByIndex() Tester:" << std::endl;
    Dictionary<int, std::string> dict;
    for (int i = 0; i < 10; i++)
    {
        dict.add(i + 1, "added");
    }

    KeyValue<int, std::string>& result = dict.getByIndex(3);
    result.display();

}

void DictionaryTester::testGetByKey()
{
    std::cout << "Dictionary getByKey() Tester:" << std::endl;
    Dictionary<int, std::string> dict;
    for (int i = 0; i < 10; i++)
    {
        dict.add(i + 1, "added");
    }

    KeyValue<int, std::string> expected(8, "added");
    KeyValue<int, std::string> result = dict.getByKey(8);

    std::cout << "Expected: ";
    expected.display();
    std::cout << "Result: ";
    result.display();
}