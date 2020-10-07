//#include "Triangle.h"
/*
int main() { 

   //Simple Testing
    if ( isTriangle(Triangle(3,2,4)) != Scalene) { std::cout << "failed for <3,2,4>\n" << std::endl;}  

    if ( isTriangle(Triangle(5,4,3)) != Right) {std::cout << "failed for <5,4,3>\n" << std::endl;} 

    if ( isTriangle(Triangle(1,1,1)) != Equilateral) {std::cout << "failed for <1,1,1>\n" << std::endl;}

    if ( isTriangle(Triangle(-1,-1,-2)) != NotATriangle) {std::cout << "failed for <-1,-1,-2>\n" << std::endl;}

    if ( isTriangle(Triangle(3,2,4)) != Scalene) { std::cout << "failed for <3,2,4>\n" << std::endl;}

    if ( isTriangle(Triangle(4,4,6)) != Isosceles) {std::cout << "failed for <4,4,6>\n" << std::endl;}

    if ( isTriangle(Triangle(INT_MAX,INT_MAX,INT_MAX)) != NotATriangle) {std::cout << "failed for <-1,-1,-2>\n" << std::endl;}

    //Structured Testing
    std::vector <triangleTest> test_run;

    test_run.push_back(triangleTest((Triangle(1,2,3)), Scalene));
    test_run.push_back(triangleTest((Triangle(3,3,5)), Isosceles));
    test_run.push_back(triangleTest((Triangle(1,2,3)), Scalene));
    test_run.push_back(triangleTest((Triangle(4,-2,8)), NotATriangle));
    test_run.push_back(triangleTest((Triangle(3,5,7)), Scalene));
    test_run.push_back(triangleTest((Triangle(200,200,201)), Isosceles));
    test_run.push_back(triangleTest((Triangle(5,12,13)),Right));
    test_run.push_back(triangleTest(Triangle(35,612,613), Right));
    test_run.push_back(triangleTest(Triangle(23,264,265), Right));
    test_run.push_back(triangleTest(Triangle(2,2,2), Equilateral));


    // Testing with Random Numbers. 
    int x,y,z;
    unsigned seed = time(NULL);
    Triangle *test_tri = NULL; // dynamic memory for triangle



    srand(seed);
    //  Update, Random Testing of isTriangle
    

    for ( int i=0; i<100; i++ ) {
        x=rand() % 100 + 99 , y=rand() % 50 + 149, z=rand() % 20 + 179; // Generate the random integers

        test_tri = new Triangle(x,y,z); 

        if ( inquality_theorem(*test_tri)) { 

            test_run.push_back(triangleTest(*test_tri, Scalene));

            delete test_tri;
            test_tri = NULL;
        }
    }

    // Run the Test
    for ( int i=0; i< test_run.capacity(); i++) {
        runTest(test_run[i]);
    }
    return 0;
} */