#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    // 基本情況：如果輸入字串的長度為1，直接返回對應的整數
    if (strlen(input) == 1)
    {
        return input[0] - '0';
    }
    // 遞迴情況：將除了第一位之外的子字串轉換成整數，然後乘以10再加上第一位對應的整數值
    else
    {
    int smallerInteger = convert(input + 1); // 使用字串索引取得從第二個字符開始的子字串
    int lastDigit = input[0] - '0'; // 取得最後一位的整數值
    int tens = 1;
    for (int i = 0; i < strlen(input) - 1; i++)
    {
        tens *= 10;
    }
    return smallerInteger + lastDigit * tens;
    }
}