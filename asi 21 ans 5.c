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
    struct employee s;
    int i,r,count=1;
    struct employee b[5];
    printf("ENTER EMPLOYEES INFORMATION TO SORT THEM ACCORDING TO THEIR SALARY\n");
    for(i=0;i<5;i++)
    {
        b[i]=input(count);
        count++;
    }
    for(r=1;r<5;r++)
    {
        for(i=0;i<5-r;i++)
            {
                if(b[i].salary<b[i+1].salary)
                {
                    s=b[i+1];
                    b[i+1]=b[i];
                    b[i]=s;
                }
            }
    }
    for(i=0;i<5;i++)
    {
        printf("%d %s %d\n",b[i].id,b[i].name,b[i].salary);
    }

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
