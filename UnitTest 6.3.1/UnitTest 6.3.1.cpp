#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3.1/Lab 6.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(MinOddTests)
{
public:
    TEST_METHOD(TestFindMinOdd)
    {
        std::vector<int> arr = { 9, 6, 15, 4, 8, 13, 10, 3, 17, 2, 11 };
        int minOdd = findMinOdd(arr);
        Assert::AreEqual(minOdd, 3);
    }

    TEST_METHOD(TestFindMinOddGeneric)
    {
        std::vector<int> arr = { 27, 45, 62, 14, 38, 91, 33, 57, 72, 10 };
        int minOdd = findMinOddGeneric(arr);
        Assert::AreEqual(minOdd, 27);
    }
};