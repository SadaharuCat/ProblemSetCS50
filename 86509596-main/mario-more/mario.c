#include <cs50.h>
#include <stdio.h>
int n;
int m;
int main(void)

{ //高度要在1~8之間
    do
    {
        n = get_int("Height : \n");
    }
    while ((n < 1) || (n > 8));

//疊方塊重複n次
   for (int i = 0; i < n; i++)
   {//每一行之前的空格
       for (int j = 0 ; j < n - i -1 ; j++)
       {
           printf(" ");
       }
    //金字塔左半邊的方塊
       for(int k = 0 ; k < i + 1 ; k++)
       {
            printf("#");
       }
    //中間的洞
            printf("  ");
    //金字塔右半邊的方塊
       for(int l = 0 ; l < i + 1 ; l++)
       {
            printf("#");
       }


        printf("\n");
   }
}




