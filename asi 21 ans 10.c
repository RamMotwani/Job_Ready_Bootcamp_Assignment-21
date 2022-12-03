#include<stdio.h>
struct marks input();
struct marks
{
    int rollno;
    char name[20];
    int chem,maths,phy;
};
int main()
{
    printf("ENTER STUDENTS INFO AND MARKS TO FIND THEIR PERCENTAGE\n");
    struct marks s[5];
    int i,t,count=1;
    float m;
    for(i=0;i<5;i++)
    {
        printf("enter %d student roll no. , name & enter ( chemistry , maths & physics marks out of 100)\n",count);
        s[i]=input();
    }
    for(i=0;i<5;i++)
    {
        t=s[i].chem+s[i].maths+s[i].phy;
         m=t/3;
        printf("percentage of %s is %f\n",s[i].name,m);
    }

}
struct marks input()
{

    struct marks d;
    scanf("%d",&d.rollno);
    fflush(stdin);
    gets(d.name);
    scanf("%d %d %d",&d.chem,&d.maths,&d.phy);
    return d;

}
