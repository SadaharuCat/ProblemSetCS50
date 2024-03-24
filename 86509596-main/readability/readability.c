#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letter(string text);
int count_word(string text);
int count_sent(string text);

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text:");

    // Count the number of letters, words, and sentences in the text
    int l = count_letter(text);
    int w = count_word(text);
    int s = count_sent(text);

    // Compute the Coleman-Liau index
    float L = (l / (float) w) * 100;
    float S = (s / (float) w) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    // Print the grade level
    if(index >= 16){
        printf("Grade 16+\n");
    }else if(index < 1){
        printf("Before Grade 1\n");
    }else{
        printf("Grade %i\n", (int)round(index));
    }

}


//the function return the number of letter in text
int count_letter(string text)
    {
        int count_letter = 0;
        while(*text != '\0')
        {
            if(isalpha(*text)){
                count_letter ++;
            }
            text ++;
        }
        return count_letter;
    }

//the function return the number of words in text
int count_word(string text){
        int count_word = 0;
        int in_word = 0; //用來檢查單字邊界

        while(*text != '\0'){
            if(isspace(*text)){
                count_word ++;
            }
                 text ++;
        }
    return count_word += 1;
    }
//the function return the number of sentences in text

int count_sent(string text){
    int count_sent = 0;
    int in_sent = 0;

    while(*text != '\0'){
        if(*text == '.'||*text == '!'||*text == '?'){
            count_sent ++;
        }
        text ++;
    }
    return count_sent;
}




