// Q. 8- wap to increment given binary number by 1
#include <stdio.h>
void main()
{
    int num,b_num,d_num=0,base=1,rem,i,a[20];
    printf("Enter the binary number\n");
    scanf("%d",&num);
    b_num=num;
    while(num>0)
    {
        rem=num%10;
        d_num=d_num+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("The binary number is:- %d",b_num);
    printf("\nThe equivalant decimal number is:- %d\n",d_num);
        d_num++;
    for (i=0; d_num>0; i++)
    {
        a[i]=d_num%2;
        d_num=d_num/2;
    }
    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
}
}