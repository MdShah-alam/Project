#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

int pin[10];
int other_number,bill,choice,number,amount;
char str1[20]="Shah-alam";
char str2[20],str3[20];

void Bill_Pay()
{
    printf("\t 1.self\n");
    printf("\t 2.other\n");

    printf("\tEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\tEnter the amount of bill :");
        scanf("%d",&bill);
        printf("\tEnter your pin :");
        fflush(stdin);
        gets(str2);

        if(strcmp(str1,str2)==0)
        {
            printf("Bill pay successfully\n");
        }
        else
        {
            printf("Your pin is wrong\n");
        }
        break;
    case 2:
        printf("\tEnter the mobile number :");
        scanf("%d",&other_number);
        printf("\tEnter the amount of bill :");
        scanf("%d",&bill);
        printf("\tEnter your pin :");
        fflush(stdin);
        gets(str2);

        if(strcmp(str1,str2)==0)
        {
            printf("Send money successfully\n");
        }
        else
        {
            printf("Your pin is wrong\n");
        }
    }
}
void Send_Money()
{
    printf("\tEnter the mobile number :");
    scanf("%d",&other_number);
    printf("\tEnter the amount of bill :");
    scanf("%d",&bill);
    printf("\tEnter your pin :");
    fflush(stdin);
    gets(str2);

    if(strcmp(str1,str2)==0)
    {
        printf("Bill pay successfully\n");
    }
    else
    {
        printf("Your pin is wrong\n");
    }
}
void Topup()
{
    printf("\t 1.top up\n");
    printf("\t 2.Mobile-cash Refill\n");
    printf("\t 3.Internet data\n");
    printf("\t 4.Robi cash Refill\n");
    printf("\t Enter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\t 1.self\n");
        printf("\t 2.other\n");

        printf("\tEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\tEnter the amount :");
            scanf("%d",&bill);
            printf("\tEnter your pin :");
            fflush(stdin);
            gets(str2);

            if(strcmp(str1,str2)==0)
            {
                printf("\tRecharge successfully");
            }
            else
            {
                printf("Your pin is wrong\n");
            }
            break;
        case 2:
            printf("\tEnter the mobile number :");
            scanf("%d",&other_number);
            printf("\tEnter the amount of bill :");
            scanf("%d",&bill);
            printf("\tEnter your pin :");
            fflush(stdin);
            gets(str2);

            if(strcmp(str1,str2)==0)
            {
                printf("\tRecharge successfully");
            }
            else
            {
                printf("Your pin is wrong\n");
            }
            break;
        }
    case 2:
        printf("\tEnter the mobile number :");
        scanf("%d",&other_number);
        printf("\tEnter the amount of bill :");
        scanf("%d",&bill);
        printf("\tEnter your pin :");
        fflush(stdin);
        gets(str2);

        if(strcmp(str1,str2)==0)
        {
            printf("\tMobile-cash refill successfully");
        }
        else
        {
            printf("Your pin is wrong\n");
        }
        break;
    case 3:
        printf("\t 1.Robi\n");
        printf("\t 2.Banglalink\n");
        printf("\t 3.Graminphone\n");
        printf("\t 4.Airtel\n");
        printf("\t 5.Telltalk\n");
        printf("\tEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\t 1. 1GB 20 take 30 days\n");
            printf("\t 2. 5GB 80 take 30 days\n");
            printf("\t 3. 10GB 100 take 7 days\n");
            printf("\t 4. 20GB 200 take 30 days\n");
            printf("\tEnter the key which you want :");
            scanf("\t%d",&choice);
            printf("\tEnter your pin :");
            fflush(stdin);
            gets(str2);

            if(strcmp(str1,str2)==0)
            {
                printf("\t Your offer is starting form now");
            }
            else
            {
                printf("Your pin is wrong\n");
            }
            break;
        case 2:
            printf("\t 1. 1GB 20 take 30 days\n");
            printf("\t 2. 5GB 80 take 30 days\n");
            printf("\t 3. 10GB 100 take 7 days\n");
            printf("\t 4. 20GB 200 take 30 days\n");
            printf("\tEnter the key which you want :");
            scanf("\t%d",&choice);
            printf("\tEnter your pin :");
            fflush(stdin);
            gets(str2);

            if(strcmp(str1,str2)==0)
            {
                printf("\t Your offer is starting form now");
            }
            else
            {
                printf("Your pin is wrong\n");
            }
            break;
        case 3:
            printf("\t 1. 1GB 20 take 30 days\n");
            printf("\t 2. 5GB 80 take 30 days\n");
            printf("\t 3. 10GB 100 take 7 days\n");
            printf("\t 4. 20GB 200 take 30 days\n");
            printf("\tEnter the key which you want :");
            scanf("\t%d",&choice);
            printf("\tEnter your pin :");
            fflush(stdin);
            gets(str2);

            if(strcmp(str1,str2)==0)
            {
                printf("\t Your offer is starting form now");
            }
            else
            {
                printf("Your pin is wrong\n");
            }
            break;
        case 4:
            printf("\t 1. 1GB 20 take 30 days\n");
            printf("\t 2. 5GB 80 take 30 days\n");
            printf("\t 3. 10GB 100 take 7 days\n");
            printf("\t 4. 20GB 200 take 30 days\n");
            printf("\tEnter the key which you want :");
            scanf("\t%d",&choice);
            printf("\tEnter your pin :");
            fflush(stdin);
            gets(str2);

            if(strcmp(str1,str2)==0)
            {
                printf("\t Your offer is starting form now");
            }
            else
            {
                printf("Your pin is wrong\n");
            }
            break;
        case 5:
            printf("\t 1. 1GB 20 take 30 days\n");
            printf("\t 2. 5GB 80 take 30 days\n");
            printf("\t 3. 10GB 100 take 7 days\n");
            printf("\t 4. 20GB 200 take 30 days\n");
            printf("\tEnter the key which you want :");
            scanf("\t%d",&choice);
            printf("\tEnter your pin :");
            fflush(stdin);
            gets(str2);

            if(strcmp(str1,str2)==0)
            {
                printf("\t Your offer is starting form now");
            }
            else
            {
                printf("Your pin is wrong\n");
            }
            break;
        }
    case 4:
        printf("don't include yet");
        break;
    }
}
void Bank_AC()
{
    printf("\tSend Instructions\n");
    printf("\t1.From ur Bank Acc\n");
    printf("\t2.To ur Bank Acc\n");
    printf("\t3.To Any Bank Acc\n");
    printf("\t4.To other Bank Acc\n");
    printf("\tEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\t1.Main menu\n");
        printf("\t0.Logout\n");
        printf("\tPressed the key which you want :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            main();
            break;
        case 2:
            Logout();
            break;
        }
        break;
    case 2:
        printf("\t1.Main menu\n");
        printf("\t0.Logout\n");
        printf("\tPressed the key which you want :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            main();
            break;
        case 2:
            Logout();
            break;
        }
        break;
    case 3:
        printf("\t1.Main menu\n");
        printf("\t0.Logout\n");
        printf("\tPressed the key which you want :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            main();
            break;
        case 2:
            Logout();
            break;
        }
        break;
    case 4:
        printf("\t1.Main menu\n");
        printf("\t0.Logout\n");
        printf("\tPressed the key which you want :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            main();
            break;
        case 2:
            Logout();
            break;
        }
        break;

    }
}
void My_Acc()
{
    printf("\t Send Instructions\n");
    printf("\t.......................\n");
    printf("\t 1.Balance\n");
    printf("\t 2.Statement\n");
    printf("\t 3.Change pin\n");
    printf("\t 4.Account No\n");
    printf("\t 5.Help\n");
    printf("\t 9.Main manu\n");
    printf("\tEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\tEnter your pin :");
        fflush(stdin);
        gets(str2);

        if(strcmp(str1,str2)==0)
        {
            printf("\t Your balance is :%d", 5000);
        }
        else
        {
            printf("Your pin is wrong\n");
        }
        break;
    case 2:
        printf("\tSend Instructions\n");
        printf("\tYour request is received successfully. You will be notified shortly\n");
        printf("\t1.Main menu\n");
        printf("\t0.Logout\n");
        printf("\tPressed the key which you want :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            main();
            break;
        case 2:
            Logout();
            break;
        }
    case 3:
        printf("\tEnter your old pin :");
        fflush(stdin);
        gets(str2);

        if(strcmp(str1,str2)==0)
        {
            printf("\tEnter your new pin :");
            fflush(stdin);
            gets(str3);
            strcpy(str1,str3);
            printf("\tEnter your new pin :");
            fflush(stdin);
            gets(str3);
            strcpy(str1,str3);
        }
        else
        {
            printf("Your pin is wrong\n");
        }
        printf("\tEnter your pin :");
        fflush(stdin);
        gets(str2);

        if(strcmp(str1,str2)==0)
        {
            printf("\t Pin change successfully");
        }
        else
        {
            printf("Pin is not changed\n");
        }
        break;
    case 4:
        printf("\tEnter your pin :");
        fflush(stdin);
        gets(str2);

        if(strcmp(str1,str2)==0)
        {
            printf("\t Account No:0124523214531569874\n");
            printf("\t Account Title :SHAH-ALAM\n");
            printf("\tProduct :SLQIEWIEREOPQSAD\n");

            printf("\tSend Instructions\n");
            printf("\t1.Main menu\n");
            printf("\t0.Logout\n");
            printf("\tPressed the key which you want :");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                main();
                break;
            case 2:
                Logout();
                break;
            }
        }
        else
        {
            printf("Your pin is wrong\n");
        }
    case 5:
        printf("\tDo not include yet");
        break;
    case 9:
        main();
        break;
    }

}
void Remittance()
{
    printf("\tSend Instructions\n");
    printf("\t1.Main menu\n");
    printf("\t0.Logout\n");
    printf("\tPressed the key which you want :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        main();
        break;
    case 2:
        Logout();
        break;
    }
}
void Cashout()
{
    printf("\tSend Instructions\n");
    printf("\t1.From Agent\n");
    printf("\tFrom ATM\n");
    printf("\tEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\tEnter your Agent number :");
        scanf("%d",&number);
        printf("\tEnter your amount :");
        scanf("%d",&amount);
        printf("\tEnter your pin :");
        fflush(stdin);
        gets(str2);

        if(strcmp(str1,str2)==0)
        {
            printf("\t Cash-out successfully");
        }
        else
        {
            printf("Your pin is wrong\n");
        }
        break;

    }
}
void Logout()
{
printf("\n\t.......THANK YOU..........\n\n");
}
int main()
{
    system("color 0b");
    int opt;
    printf("\t........ welcome duch-bangla-bank ......\n");
    printf("\t\t Send Instructions......\n");
    printf("\t 1.Bill Pay\n");
    printf("\t 2.Send Money\n");
    printf("\t 3.Topup\n");
    printf("\t 4.Bank A/C\n");
    printf("\t 5.My Acc\n");
    printf("\t 6.Remittance\n");
    printf("\t 7.Cashout\n");
    printf("\t 0.Logout\n");
    printf("\tEnter your choice :");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        Bill_Pay();
        break;
    case 2:
        Send_Money();
        break;
    case 3:
        Topup();
        break;
    case 4:
        Bank_AC();
        break;
    case 5:
        My_Acc();
        break;
    case 6:
        Remittance();
        break;
    case 7:
        Cashout();
        break;
    case 0:
        Logout();
        break;
    default:
        printf("Invalid choice ");
    }
}
