#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int count_letters(string text)
{

    int letters = 0;
    int size = strlen(text);

    for (int i = 0; i < size; i++)
    {
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            letters++;
        }
    }

    return letters;

}

int count_words(string text)
{

    int words = 0;
    int size = strlen(text);
    int i = 0;

    while (text[i] != '\0')
    {
        if (text[i] == ' ')
        {
            words++;
        }


        i++;
    }

    return words + 1;
}

int count_sentences(string text)
{

    int sentences = 0;
    int size = strlen(text);
    int i = 0;

    while (text[i] != '\0')
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }


        i++;
    }

    return sentences;

}

int main(void)
{


    string text = get_string("Text: ");
    //printf("%i letter(s)\n", count_letters(text));
    //printf("%i words(s)\n", count_words(text));
    //printf("%i sentence(s)\n", count_sentences(text));

    float l = (count_letters(text) / (float)count_words(text)) * 100.0;
    float s = (count_sentences(text) / (float)count_words(text)) * 100.0;

    int index = round(0.0588 * l - 0.296 * s - 15.8);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {

        printf("Before Grade 1\n");

    }
    else
    {
        printf("Grade %i\n", index);
    }


}
