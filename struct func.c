#include <stdio.h>

struct person
{
    char name[10];
    int age;
};

struct student
{
    char name[10];
    int age;
    int roll_no;
} ;

struct employee
{
    char name[10];
    int age;
    int salary;
};

void displayperson(struct person);
void displaystudent(struct student);
void displayemployee(struct employee);

void main()
{
    struct person P={"john",18};
    struct student S={"nick",25,1};
    struct employee E={"kol",30,1500000};


    displayperson(P);
    displaystudent(S);
    displayemployee(E);

}

void displayperson(struct person P)
{
    printf("\n person name :=%s",P.name);
    printf("\n age:=%d",P.age);
}

void displaystudent(struct student S)
{
    printf("\n\n student name :=%s",S.name);
    printf("\n age:=%d",S.age);
    printf("\n roll no:=%d",S.roll_no);
}

void displayemployee(struct employee E)
{
    printf("\n\n employee name :=%s",E.name);
    printf("\n age:=%d",E.age);
    printf("\n salary:=%d",E.salary);
}
