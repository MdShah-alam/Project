#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

struct user
{
    char fullname[50];
    char email[50];
    char password[50];
    char phone[50];
    char username[50];
} ;
void takeinput(char ch[50])
{
    fgets(ch,50,stdin);
    ch[strlen(ch)-1]=0;
}
char generateusername(char email[50],char username[50])
{
    for(int i=0; i<strlen(email); i++)
    {
        if(email[i]=='@')break;
        else username[i]=email[i];
    }
}
int main()
{
    system("color 0b");
    FILE *fp;
    int opt,usrFound = 0;
    char username[50], pword[50];
    struct user user;
    struct user usr;
    char password2[50];
    printf("\n\t\t........welcome to authentication system..........");
    printf("\n Please choose your operation");
    printf("\n 1. Singup");
    printf("\n 2. Login");
    printf("\n 3. Exit");

    printf("\n Enter your choice  :");
    scanf("%d",&opt);
    fgetc(stdin);
    switch(opt)
    {
    case 1:
        printf(" Enter your full name :\t");
        takeinput(usr.fullname);
        printf(" Enter your email :\t");
        takeinput(usr.email);
        printf(" Enter your contact number :\t");
        takeinput(usr.phone);
        printf(" Enter your password :\t");
        takeinput(usr.password);
        printf(" Confirm your password :");
        takeinput(password2);

        if(!strcmp(usr.password,password2))
        {
            printf("\n Your password matchedd");
            generateusername(usr.email,usr.username);
            printf("\n Your username is : %s\n",usr.username);
            fp=fopen("text.txt","a+");
            fwrite(&usr,sizeof(struct user),1,fp);
            if(fwrite!=0) printf("\nuser registration success .\n Your user name is : %s",usr.username);
            else printf("something is going wrong");
            fclose(fp);

        }
        else
        {
            printf("\n Password don't matched");
            Beep(750,300);
        }
        break;
    case 2:
        printf("\n Enter your username :");
        takeinput(username);
        printf("\n Enter your password :");
        takeinput(pword);

        fp=fopen("text.txt","r");
        while(fread(&usr,sizeof(struct user),1,fp))
        {
            if(!strcmp(usr.username,username))
            {
                if(!strcmp(usr.password,pword))
                {
                    printf("\n\t\t\t welcome :%s",usr.fullname);
                    printf("\n\t Full name : %s",usr.fullname);
                    printf("\n\t Email : %s",usr.email);
                    printf("\n\t Username : %s",usr.username);
                    printf("\n\t Contact no. : %s",usr.phone);

                }
                else
                {
                    printf("\n Invalid password !");
                    Beep(800,300);
                }
                usrFound=1;
            }
        }
        if(!usrFound)
        {
            printf("\n User is not registered !");
            Beep(800,300);
        }
        fclose(fp);
        break;
    case 3:
        printf("\n\t\t\t Bye Bye.........");
        return 0;
    }

    return 0;
}
