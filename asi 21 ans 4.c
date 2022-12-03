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
    int i,max,count=1;
    struct employee b[5];
    printf("Enter Employees Information To Find Highest Salary Employee\n");
   for(i=0;i<5;i++)
    {
        b[i]=input(count);
        count++;
    }
    max=b[0].salary;
    for(i=1;i<5;i++)
    {
        if(b[i].salary>max)
        {
            max=b[i].salary;
        }
    }
    for(i=0;i<5;i++)
    {
        if(b[i].salary==max)
        {
            printf("%s has highest salary %d",b[i].name,max);
        }
    }
    return 0;
}

struct employee input(int c)
{

    struct employee d;
    printf("\nenter %d employee id , name and salary\n",c);
    scanf("%d",&d.id);
    fflush(stdin);
    gets(d.name);
    scanf("%d",&d.salary);
    return d;

}


