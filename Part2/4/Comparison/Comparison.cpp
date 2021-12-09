// Comparison.cpp : Author Jacobo Orozco Ardila
// In this exercise I shall compare two different function and exponse via comments the cases on which they have different outputs
// AFTER TEN TESTS WITH DIFFERENT NUMBERS I CAN CONFIDENTLY CONCLUDE THAT THE FUNCTIONS WHILE DIFFERENT VIA DEFINITION OUTPUT THE SAME RESULTS

#include <iostream>


int first_square(int val)
{
    return val * val;
}

#define second_square(val)(val*val)

int main()
{
    int val1 = 2;
    
    printf("FIRST TEST\n");
    int first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    int second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 4;

    printf("SECOND TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 6;

    printf("THIRD TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 8;

    printf("FOURTH TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 10;

    printf("FIFTH TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 12;

    printf("SIXTH TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 14;

    printf("SEVENTH TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 16;

    printf("EIGTH TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 18;

    printf("NINTH TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);

    val1 = 20;

    printf("TENTH TEST\n");
    first_square_result = first_square(val1);
    printf("The first square returns: %d \n", first_square_result);

    second_square_result = second_square(val1);
    printf("The second square returns: %d \n", second_square_result);
}


