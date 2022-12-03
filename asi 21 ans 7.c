#include<stdio.h>
struct time input();
struct time
{
    int hour,minute,second;
};
int main()
{

    struct time p,t1,t2;
    printf("enter 1st time period in this format hour/minute/second\n");
    t1=input();
    printf("enter 2nd time period in this format hour/minute/second\n");
    t2=input();
    if(t2.second<t1.second)
    {
        t2.minute--;
        t2.second+=60;
    }
    p.second=t2.second-t1.second;
     if(t2.minute<t1.minute)
    {
        t2.hour--;
        t2.minute+=60;
    }
    p.minute=t2.minute-t1.minute;
    p.hour=t2.hour-t1.hour;
    printf("differnce between two time period is %d %d %d",p.hour,p.minute,p.second);
}
struct time input()
{

    struct time d;
    scanf("%d %d %d",&d.hour,&d.minute,&d.second);
    return d;

}
