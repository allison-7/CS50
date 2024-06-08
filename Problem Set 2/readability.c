#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// index = 0.0588 * L - 0.296 * S - 15.8
// where L is the average number of letters per 100 words in the text,
// and S is the average number of sentences per 100 words in the text.

int main(void)
{
    string text;
    do
    {
        text = get_string("Text: ");
    }
    while (text[0] == '\0');
    // get # of letters
    int num_letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            num_letters++;
        }
    }
    // get # of sentences
    int num_sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            num_sentences++;
        }
    }
    // get # of words
    int num_words = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            num_words++;
        }
    }
    num_words++; // fixes bug where the last word is not counted
    // get grade level
    double l = ((float) num_letters / (float) num_words) * 100;
    double s = ((float) num_sentences / (float) num_words) * 100;
    double index = (0.0588 * l) - (0.296 * s) - 15.8;
    // printf("%f\n", index);
    int grade = round(index);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
