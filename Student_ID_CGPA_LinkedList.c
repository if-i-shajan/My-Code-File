#include <stdio.h>
#include <stdlib.h>
#define MAX_STUDENTS 10

struct Student
{
    int id;
    float cgpa;
};

void displayStudent(struct Student student)
{
    printf("ID: %d\tCGPA: %.2f\n", student.id, student.cgpa);
}

void displayAllStudents(struct Student students[], int count)
{
    printf("All Students Information:\n");
    for (int i = 0; i < count; i++)
    {
        displayStudent(students[i]);
    }
}

void searchStudent(struct Student students[], int count, int targetId)
{
    for (int i = 0; i < count; i++)
    {
        if (students[i].id == targetId)
        {
            printf("Student found:\n");
            displayStudent(students[i]);
            return;
        }
    }
    printf("Student with ID %d not found.\n", targetId);
}

void editStudent(struct Student students[], int count, int targetId)
{
    for (int i = 0; i < count; i++)
    {
        if (students[i].id == targetId)
        {
            printf("Enter new CGPA for student with ID %d: ", targetId);
            scanf("%f", &students[i].cgpa);
            printf("Record updated successfully.\n");
            return;
        }
    }
    printf("Student with ID %d not found.\n", targetId);
}

void insertStudent(struct Student students[], int *count)
{
    if (*count < MAX_STUDENTS)
    {
        printf("Enter details for the new student:\n");
        printf("ID: ");
        scanf("%d", &students[*count].id);
        printf("CGPA: ");
        scanf("%f", &students[*count].cgpa);
        (*count)++;
        printf("Student record inserted successfully.\n");
    }
    else
    {
        printf("Cannot insert. Maximum number of students reached.\n");
    }
}

void deleteStudent(struct Student students[], int *count, int targetId)
{
    for (int i = 0; i < *count; i++)
    {
        if (students[i].id == targetId)
        {
            for (int j = i; j < *count - 1; j++)
            {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("Record for student with ID %d deleted successfully.\n", targetId);
            return;
        }
    }
    printf("Student with ID %d not found.\n", targetId);
}

int main()
{
    struct Student students[MAX_STUDENTS];
    int studentCount = 0;

    for (int i = 0; i < 10; i++)
    {
        students[i].id = i + 1;
        students[i].cgpa = 3.5 + i * 0.1;
        studentCount++;
    }

    displayAllStudents(students, studentCount);

    int searchId;
    printf("\nEnter the ID to search: ");
    scanf("%d", &searchId);
    searchStudent(students, studentCount, searchId);

    int editId;
    printf("\nEnter the ID to edit: ");
    scanf("%d", &editId);
    editStudent(students, studentCount, editId);

    displayAllStudents(students, studentCount);

    insertStudent(students, &studentCount);

    displayAllStudents(students, studentCount);
    int deleteId;
    printf("\nEnter the ID to delete: ");
    scanf("%d", &deleteId);
    deleteStudent(students, &studentCount, deleteId);
    displayAllStudents(students, studentCount);

    return 0;
}
