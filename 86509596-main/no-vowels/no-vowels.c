// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
        string replace(char output[])
        {   int len = strlen(output);
            for(int i = 0; i < len  ; i++)
            {
                switch(output[i])
                {
                    case 'a':
                        output[i] = '6';
                        break;
                    case 'e':
                        output[i] = '3';
                        break;
                    case 'i':
                        output[i] = '1';
                        break;
                    case 'o':
                        output[i] = '0';
                        break;
                }
            }
            return output;
        }



int main(int argc, string argv[])
{
    if(argc == 2)
    {
        string output = argv[1];
        output = replace(output);
        printf("%s\n",output);
    }
    else
    {
        printf("Invalid command-line argument\n");
    }
    return 1;
}
