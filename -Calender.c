#include<stdio.h>
#include<conio.h>
int getFirstDayOfTheYear(int year)
{
    int day=(year*365+((year-1)/4)-((year-1)/100)+(year-1)/400)%7;
    return day;
}

int main()
{
    int year;
    printf("Enter your year:");
    scanf("%d",&year);
    printf("\n\n******** welcome to %d ********\n\n",year);
    char *months[]= {"January","February","March","April","June","July","August","September","October","November","December"};
    int Days[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,totaldays,weekend=0,spaceCounter=0;

    weekend=getFirstDayOfTheYear(year);
   if((year%4==0&&year%100!=0)||(year%400==0))
    {
        Days[1]=29;
    }
        for(i=0; i<12; i++)
        {
            printf(" ------------- %s --------------\n",months[i]);
            printf(" Sun Mon Tue Wen Thu Fri Sat\n");

            for(spaceCounter=1; spaceCounter<weekend; spaceCounter++)
            {
                printf("     ");
            }
            totaldays=Days[i];
            for(j=1; j<=totaldays; j++)
            {
                printf("%4d",j);
                weekend++;
                if(weekend>6)
                {
                    weekend=0;
                    printf("\n");
                }
            }
            printf("\n");
        }
    getch();
}
