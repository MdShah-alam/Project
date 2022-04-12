#include<stdio.h>
#include<conio.h>
int total_amount=50000,totaldeposit=0,totalwithdraw=0,totalTr=0;
int amount,amo,tr,ch;
void deposit()
{
    printf("\n\t\t Enter your amount :");
    scanf("%d",&amount);
    total_amount=total_amount+amount;
}
void withdraw()
{
    printf("\n\t\tEnter the amount that you withdraw :");
    scanf("%d",&amo);
    if(total_amount-500>amo)
    {
        total_amount=total_amount-amo;
    }
    else
    {
        printf("\n\t\tInsufficient balance ");
    }
}
void transfer()
{
    printf("\n\t\tEnter the amount that you transfer:");
    scanf("%d",&tr);
    if(total_amount-500>tr)
    {
        total_amount=total_amount-tr;
    }
    else
    {
        printf("\n\t\tInsufficient balance ");
    }
}
void check()
{
    printf("\n\t\t The total amount :%d",total_amount);
    printf("\n\t\t The deposit amount :%d",totaldeposit);
    printf("\n\t\t The withdraw amount :%d",totalwithdraw);
    printf("\n\t\t The transfer amount :%d",totalTr);
}
int list()
{
    printf("\n\t\t 1.Deposit amount :");
    printf("\n\t\t 2.Withdraw amount :");
    printf("\n\t\t 3.Transfer amount :");
    printf("\n\t\t 4.Check Details :");
    printf("\n\t\t 5.Exit ");
    printf("\n\t\t Enter your choice :");
    scanf("%d",&ch);
    return(ch);
}
int main()
{
    while(1)
    {
        system("CLS");
        switch(list())
        {
        case 1:
            deposit();
            totaldeposit=totaldeposit+amount;
            break;
        case 2:
            withdraw();
            if(total_amount-500>amo)
            {
                totalwithdraw=totalwithdraw+amo;
            }
            break;
        case 3:
            transfer();
            if(total_amount-500>tr)
            {
                totalTr=totalTr+tr;
            }
            break;
        case 4:
            check();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n\t Invalid choice");
        }
        getch();
    }
}
