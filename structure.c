#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct Student anubhav, bhanu, ashish;
    anubhav.id = 1;
    bhanu.id = 2;
    ashish.id = 3;

    anubhav.marks = 98;
    bhanu.marks = 90;
    ashish.marks = 92;

    anubhav.fav_char = 'A';
    bhanu.fav_char = 'A';
    ashish.fav_char = 'A';


    printf("Anubhav ID is %d.\n", anubhav.id);
    printf("Bhanu ID is %d.\n", bhanu.id);
    printf("Ashish ID is %d.\n", ashish.id);

    printf("Anubhav has got %d marks.\n", anubhav.marks);
    printf("Bhanu has got %d marks.\n", bhanu.marks);
    printf("Ashish has got %d marks.\n", ashish.marks);

    printf("Anubhav favourite character is %c.\n", anubhav.fav_char);
    printf("Bhanu favourite character is %c.\n", bhanu.fav_char);
    printf("Ashish favourite character is %c.\n", ashish.fav_char);

    strcpy(anubhav.name, "Harry Potter Student of the Year");
    printf("Anubhav name is: %s\n", anubhav.name);

    return 0;
}