/* Class average program with sentinel-controlled repetitions */

#include <stdio.h>

int main()
{
    float average;
    int counter, grade, total;

    total = 0;
    counter = 0;

    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);

    while (grade != -1) {
        total = total + grade;
        counter = counter + 1;
        printf("Enter grade, -1 to end: ");
        scanf("%d", &grade);

    }

    if (counter != 0) {
        average = (float) total / counter;
        printf("Class average is %.2f\n", average);
    }
    else
        printf("No grades were entered\n");

    return 0;
}
