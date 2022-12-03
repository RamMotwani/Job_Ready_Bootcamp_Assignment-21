#include<stdio.h>
struct student input();
void display(struct student);
struct student
{
    int rollno;
    char name[20];
    int age;
};
int main()
{
    int i,count=1;
    struct student s[10];
    for(i=0;i<10;i++)
    {
        printf("enter %d student rollno. , name , age\n",count);
        s[i]=input(count);
        count++;
    }
    for(i=0;i<10;i++)
    {
        display(s[i]);
    }
    return 0;

}
struct student input()
{

    struct student d;
    scanf("%d",&d.rollno);
    fflush(stdin);
    gets(d.name);
    scanf("%d",&d.age);
    return d;

}
void display(struct student s)
{
    printf("roll no. ->%d %s %d years old\n",s.rollno,s.name,s.age);
}
