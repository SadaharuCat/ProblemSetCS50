#include <cs50.h>
#include <stdio.h>
long n;
int main(void)
{
//Prompt for input
    n = get_long("Number : \n");
//Calculate chechsum
int sum = 0;
int digit_count= 0;
long temp = n;
    while(n > 0)
    {
        //取得最右邊的數字(奇數位直接加,偶數位乘以2再加)
        int digit = n % 10;
        //從最右邊第二位數數到最後一個數（餘數為1的）
        if(digit_count % 2 == 1)
        {
            digit *= 2;
            //如果數字有兩位數要把兩位數加起來
            if (digit >= 10)
            {
                digit = digit / 10 + digit % 10;
            }
        }
        //把所有數字加起來
        sum += digit;
        //去掉最右邊的數字
        n /= 10;

        //計數器
        digit_count ++;

    }
    if(sum % 10 == 0){
        //Check for card length and starting digits
        int length = 0;
        long number = temp;
        while(number > 0){
            number /= 10;
            length ++;
        //Print AMX,MASTERCARD,VISA or INVALID
        }
        if ((length == 15 || length == 16) && ((temp >= 34e13 && temp < 35e13) || (temp >= 37e13 && temp < 38e13))) {
            printf("AMEX\n");
        } else if (length == 16 && (temp >= 51e14 && temp < 56e14)) {
            printf("MASTERCARD\n");
        } else if ((length == 13 || length == 16) && ((temp >= 4e12 && temp < 5e12)||(temp >= 4e15 && temp < 5e15))) {
            printf("VISA\n");
        } else{
            printf("INVALID\n");
        }
    }else{
        printf("INVALID\n");
    }




    return 0;
}
