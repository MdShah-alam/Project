#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int gpa, id;
    int a,b,c;
};
int main()
{
    int n;
    printf("Enter the number of student:");
    scanf("%d",&n);
    printf("\n");
    struct student s[n];
    int i,sum[i],count=0;
    for(i=0; i<n; i++)
    {
        printf("Enter the name of student[%d]:",i);
        scanf("%s",&s[i].name);
        printf("Enter the id of student[%d]:",i);
        scanf("%d",&s[i].id);
        printf("Enter the marks of subject a :");
        scanf("%d",&s[i].a);
        printf("Enter the marks of subject b :");
        scanf("%d",&s[i].b);
        printf("Enter the marks of subject c :");
        scanf("%d",&s[i].c);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sum[i]=s[i].a+s[i].b+s[i].c;
    }
       /* for(i=0;i<n;i++)
    {
        printf("sum[%d]=%d\n",i,sum[i]);
    }*/
    int max=sum[0];
    for(i=1;i<n;i++)
    {
        if(max<sum[i])
        {
            count++;
            max=sum[i];
        }
    }
    printf("The first boy is :%s\n",s[count].name);
    printf("The first boy's id:%d\n",s[count].id);
    getch();
}
