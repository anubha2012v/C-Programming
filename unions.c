#include <stdio.h>
#include <string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    // It will access any one at a time. Like in this code " strcpy(s1.name, "Anubhav");" will bw active and rest will get the garbage value.
    // union is similar to structure but union uses shared memory but structre uses individual memory.
    union Student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "Anubhav");

    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The favourite cahr  is %c \n", s1.fav_char);
    printf("The name is %s \n", s1.name);

    return 0;
}