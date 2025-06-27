#include <stdio.h>
int main()
{
     int a,b;
     printf("enter a 2 number");
     scanf("%d%d",&a,&b);

     if(a<b)
     printf("min is : %d\n ", a);
     else 
     printf("min is : %d\n ", b);

     return 0;


}