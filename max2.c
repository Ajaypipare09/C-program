#include <stdio.h>
int main()
{
     int a , b;
     printf("enter a 2 number");
     scanf("%d%d", &a,&b);
     if(a>b)
     printf("max is %d",a);
     else
     printf("max is %d",b);

     return 0;
}