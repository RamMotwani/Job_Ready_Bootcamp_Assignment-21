#include<stdio.h>
struct employee input();
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee b;
    b=input();
    return 0;
}
struct employee input()
{
    struct employee d;
    printf("enter employee id , name and salary\n");
    scanf("%d",d.id);
    fflush(stdin);
    gets(d.name);
    scanf("%d",d.salary);
    return d;

}


