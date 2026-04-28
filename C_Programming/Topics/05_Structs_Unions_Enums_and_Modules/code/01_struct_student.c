#include <stdio.h>

typedef struct
{
    int id;
    char grade;
} Student;

int main(void)
{
    Student s = {101, 'A'};
    printf("Student id=%d grade=%c\n", s.id, s.grade);
    return 0;
}