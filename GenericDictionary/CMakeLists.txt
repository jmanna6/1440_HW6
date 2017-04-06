cmake_minimum_required(VERSION 3.7)
project(GenericDictionary)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        KeyValue.cpp KeyValue.h
        Dictionary.cpp Dictionary.h
        )

add_executable(GenericDictionary main.cpp ${SOURCE_FILES})

set(TEST_FILES
        Testing Testing/testMain.cpp
        Testing/KeyValueTester.cpp Testing/KeyValueTester.h
        Testing/DictionaryTester.cpp Testing/DictionaryTester.h
        )

add_executable(Testing Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})
