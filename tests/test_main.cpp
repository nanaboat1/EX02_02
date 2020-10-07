#include <iostream> 
#include "Triangle.h"
#include "gtest/gtest.h"


TEST(IsATriangle, Triangle) {


    // Testing if it is a triangle
    Triangle *test_a = new Triangle(2,5,1);

    ASSERT_EQ(check_type(*test_a), NotATriangle ) <<  " It is not a triangle " << std::endl;

    EXPECT_EQ(check_type(*test_a), NotATriangle) << " It is not a triangle " << std::endl; 

    test_a->~Triangle(); // destructor 

    // Testing if it is an Equilateral Triangle
    test_a = new Triangle(5,5,5); 

    ASSERT_EQ(check_type(*test_a), Equilateral ) << " It an Equilateral Triangle " << std::endl;

    EXPECT_EQ(check_type(*test_a), Equilateral ) << " It is an Equilateral Triangle " << std::endl; 


    test_a->~Triangle();

    test_a = new Triangle(3,4,5); 

    ASSERT_EQ(check_type(*test_a), Right ) <<  " It is a Right Triangle " << std::endl;
    EXPECT_EQ(check_type(*test_a), Right) << " It is a Right Triangle " << std::endl;

    test_a->~Triangle(); 

    test_a = new Triangle(3,4,7); 

    ASSERT_EQ(check_type(*test_a), Scalene) <<  " It is a Scalene " << std::endl;
    EXPECT_EQ(check_type(*test_a), Scalene ) << " It is a Scalene " << std::endl;

    test_a->~Triangle();


    test_a = new Triangle(3,5,5); 

    ASSERT_EQ(check_type(*test_a), Isosceles) <<  " It is Isosceles " << std::endl;
    EXPECT_EQ(check_type(*test_a), Isosceles) << " It is a Isosceles " << std::endl;

    
    test_a->~Triangle();                         
    test_a = new Triangle(5,12,13); 

    ASSERT_EQ(check_type(*test_a), Right) <<  " It is Right " << std::endl;
    EXPECT_EQ(check_type(*test_a), Right) << " It is a Right" << std::endl;

    
    test_a->~Triangle();       
    test_a = NULL;

}

int main(int argc, char **argv ) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
