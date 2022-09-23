#include<stdio.h>
main()
{
    int no,i,rev=0,p,rem;

    printf("Enter the value:=");
    scanf("%d",&no);
    i=no;
    
    while(no!=0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    printf("rev no:=%d\n",rev);

    while(no!=0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }

    if(i==rev)
    {
        printf("Number is pelindron..");
    }
    else
    {
        printf("Number is not pelindron..");
    }
}