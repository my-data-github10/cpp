#include<stdio.h>

struct date
{
    int dd;
    int mon;
    int yy;
};

void acceptdateFromConsole (struct date *d);
void printdateOnConsole(struct date d);
void initdate(struct date *d);



int main ()
{
 struct date d;
 int choice;

 
 do 
 {
    printf("\n select 1.Accept date 2. print date 3. init date 0. exit");
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: 
           acceptdateFromConsole (&d);
            break;
        case 2: 
        printdateOnConsole(d);
         break;
        case 3:
           initdate(&d);
            break;

        default:  
        break;
    }
 } while(choice!=0);
 return 0;
}
    
void acceptdateFromConsole (struct date *d)
{
    printf("\n enter the date ");
    scanf("%d",&d->dd);
    printf("\n enetr the month=");
    scanf("%d",&d-> mon);
    printf("\n enter the year");
    scanf("%d", &d -> yy);

}

void printdateOnConsole(struct date d)
{
    printf(" date=%d/%d/%d \n",d.dd,d.mon,d.yy);
}

void initdate(struct date *d)
{
 d->dd=10;
 d->mon=10;
 d->yy=2000;
}