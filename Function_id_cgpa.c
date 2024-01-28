#include <stdio.h>
#include <stdlib.h>
#define N 5

struct student
{
    int id;
    float cgpa;
};

int main()
{
    struct student students[N];
    for (int i = 0; i < N; i++)
    {
        printf("Enter ID and CGPA\n");
        scanf("%d \n %f", &students[i].id, &students[i].cgpa);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Student ID: %d and CGPA: %.2f\n", students[i].id, students[i].cgpa);
    }
    return 0;
}
