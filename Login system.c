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
    char username[50];
    char phone[50];
};
void takeinput(char ch[50])
{
    // fgets(ch,50,strin);
    scanf("%[^\n]%*c",ch);
    ch[strlen(ch)-1]=0;
}
char generateusername(char email[50],char username[50])
{
    for(int i=0; i<strlen(email); i++)
    {
        if(email[i]=='@')
            break;
        else
            username[i]=email[i];
    }
}
void takepassword(char pwd[50])
{
    int i;
    char ch;
    while(1)
    {
        ch=getch();
        if(ch==ENTER||ch==TAB)
        {
            pwd[i]='\0';
            break;
        }
        else if(ch==BCKSPC)
        {
            if(i>0)
            {
                i--;
                printf("\b  \b");
            }
        }
        else
        {
            pwd[i++]=ch;
            printf("* \b");
        }
    }
}
int main()
{
    system("color 0b");
    struct user user;
    char password2[50];
    FILE *file;
    int opt,usrFound=0;
    printf("\n\t\t\t----------welcome to authentication system----------");
    printf("\nChoose the operating system");
    printf("\n 1.Singup");
    printf("\n 2.Login");
    printf("\n 3.Exit");

    printf("\n\n Enter your choice :\t");
    scanf("%d",&opt);
    fgetc(stdin);
    switch(opt)
    {
    case 1:
        printf("\n Enter your Full name:\t");
        scanf("%[^\n]%*c",user.fullname);
        printf("\n Enter your email:\t");
        scanf("%[^\n]%*c",user.email);
        printf("\n Enter your contact number:\t");
        scanf("%[^\n]%*c",user.phone);
        printf("\n Enter the password:\t");
        takepassword(user.password);
        printf("\n Enter your conform password : ");
        takepassword(password2);

        if(!strcmp(user.password,password2))
        {
            generateusername(user.email,user.username);
            file=fopen("test.txt","a");
            fwrite(&user,1,sizeof(struct user),file);
            if(fwrite!=0)
            {
                printf("\n\n User resgistration successful");
                printf("\n  Your user name is =%s ",user.username);
            }
            else
            {
                printf("\n\n Sorroy , Something is wrong :");
            }
        }
        else
        {
            printf("\n\n Your password is wrong");
            Beep(750,300);
        }
        fclose(file);
        break;
        struct user usr;
        char username[50],pword[50];
    case 2:
        printf("\n Enter your username :\t");
        scanf("%[^\n]%*c",usr.username);
        printf("\n Enter your password :\t");
        scanf("%[^\n]%*c",pword);
        FILE *file;
        file=fopen("test.txt","r");
        while(fread(&user,1,sizeof(struct user),file))
        {
            if(!strcmp(usr.username,username))
            {
                if(!strcmp(usr.password,pword))
                {
                    printf("\n\t\t\t\t----welcome---\t%s",usr.fullname);
                    printf("\n\t\t\tFull Name :%s",usr.fullname);
                    printf("\n\t\t\tEmail :%s",usr.email);
                    printf("\n\t\t\tUser name :%s",usr.username);
                    printf("\n\t\t\tContact number is :%s",usr.phone);
                }
                else
                {
                    printf("\n\n\t\tInvalid number");
                    Beep(750,300);
                }
                usrFound=1;
            }
        }
        if(!usrFound)
            printf("\n\t\t\tUser not registered");
        Beep(750,300);
        fclose(file);
        break;
    }
    getch();
}
