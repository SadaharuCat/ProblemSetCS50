#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
//make sure program was run with only one comment-line argument.
if(argc != 2)
{
    printf("Usage:./caesar key\n");
    return 1;
}
//maek sure every charactar in argv[1] is digit.
string word = argv[1];
for(int i = 0; word[i] != '\0'; i++ )
{
    if(!isdigit(word[i]))
    {
        printf("Usage:./caesar key\n");
        return 1;
    }
}
//convert string to int.
int k = atoi(argv[1]);

//prompt user for plaintext.
string p = get_string("plaintext:  ");
string c = p;//save the encypted text.
//for each charactar in the plaintext,rotate it if it's a letter.
for(int i  = 0; p[i] != '\0'; i++)
{
    if(isalpha(p[i]))
    {  char base = isupper(p[i]) ? 'A' : 'a'; // uppercase or lowercase?
        c[i] = (p[i] - base + k) % 26 + base;
    }
}
printf("ciphertext:  %s\n", c);





}
