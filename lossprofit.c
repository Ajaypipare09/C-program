#include <stdint.h>
int main()
{
     float costprice, sellingprice, profitorloss;

     printf("enter a costprice");
     scanf("%f",&costprice);

     printf("enter a sellingprice");
     scanf("%f", &sellingprice);

     if(sellingprice > costprice){
      profitorloss = sellingprice - costprice;

      printf("profitby :%.2f\n", profitorloss);

      } else if (costprice > sellingprice){
          printf("lossby :%.2f\n", profitorloss);


      } else {
      printf("no profit loss. \n");

      return 0;




}