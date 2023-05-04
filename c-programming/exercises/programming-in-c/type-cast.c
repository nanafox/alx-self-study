#include <stdio.h>

int main(void)
{
    // integer values
    int score1 = 73, score2 = 46, score3 = 89;
    int num_of_scores = 3;

    // simple average computation
    //? (73 + 46 + 89) / 3 = 69
    int average = (score1 + score2 + score3) / num_of_scores;
    // print average
    printf("Integer Division Average: %d\n", average); // result is 69. Because decimal point is truncated

    // Another way would've been to store it in a float.
    //? (73 + 46 + 89) / 3 = 69.00. Only the result is stored as float
    float float_average = (score1 + score2 + score3) / num_of_scores; // integer division
    printf("Intger to Float Average: %.2f\n", float_average);         // result is 69.00. Still not quite right.

    // ! Expected result is 69.33(infinite)
    // using type casting.
    //? (73 + 46 + 89) / 3.0 = 69.33 -> the average is converted to a float before division
    float type_cast_average = (score1 + score2 + score3) / (float)num_of_scores;
    printf("Type Cast Average: %.2f\n", type_cast_average);

}