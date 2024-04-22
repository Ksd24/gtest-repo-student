#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,GivenEmptyStringZeroIsExpected){
    //Arrange
    StringCalculator objUnderTest;
    string input="";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,Given_non_zero_String_one_IsExpected){
   //Arrange
    StringCalculator objUnderTest;
    string input="1";
    int expectedValue=1;
    //Act
    int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
