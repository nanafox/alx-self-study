#include <stdio.h>

/*2.1.5.12 LAB: Printing data: Part 2*/

int main()
{
    // studentA scores
    float studentAYear1 = 4.2;
    float studentAYear2 = 4.5;
    float studentAYear3 = 4.2;

    // studentB scores
    float studentBYear1 = 4.3;
    float studentBYear2 = 4.4;
    float studentBYear3 = 4.7;

    // studentC scores
    float studentCYear1 = 4.3;
    float studentCYear2 = 4.8;
    float studentCYear3 = 4.9;

    printf("%s %12s %12s %12s %9s\n", 
    "Student name", "1stYGrade", "2ndYGrade", "3rdYGrade", "Avg"); // header
    printf("%s %12s %12s %12s %9s\n", 
    "=============", "==========", "===========", "===========", "=======");
    // score for studentA
    printf("StudentA %12.2f %12.2f %12.2f %13.2f\n",
           studentAYear1, studentAYear2, studentAYear3,
           (studentAYear1 + studentAYear2 + studentAYear3) / 3);
    // score for studentB
    printf("StudentB %12.2f %12.2f %12.2f %13.2f\n",
           studentBYear1, studentBYear2, studentBYear3,
           (studentBYear1 + studentBYear2 + studentBYear3) / 3);
    // score for studentC
    printf("StudentA %12.2f %12.2f %12.2f %13.2f\n",
           studentCYear1, studentCYear2, studentCYear3,
           (studentCYear1 + studentCYear2 + studentCYear3) / 3);
           
    return 0;
}