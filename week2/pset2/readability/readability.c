#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

// Constant
const int AVERAGES_NUM = 2;

// Prototype
int count_letters(string string);
int count_words(string string);
int count_sentences(string string);
float index_calculating(int length, float array[]);
int grade(float);

int main(void)
{
    // Get text
    string text = get_string("Text: ");

    // Count letters
    int letters = count_letters(text);
    
    // Count words
    int words;
    int n = strlen(text);
    if (n == 0) // This step is only to avoid an output of 1 word from an empty input.
    {
        words = 0;
        printf("0 word(s): \n");
    }
    else
    {
        words = count_words(text);
    }

    // Count sentences
    int sentences = count_sentences(text);

    // Calculating averages
    float L;
    float S;
    printf("The average of letters is: %f\n", L = letters / (float) words * 100);
    printf("The average of sentences is: %f\n", S = sentences / (float) words * 100);
    
    // Declaring the array of averages
    float averages[AVERAGES_NUM];
    averages[0] = L;
    averages[1] = S;

    // Calculating index
    int index = round(index_calculating(AVERAGES_NUM, averages));
    
    // Get grade
    int grade = round(index);

    // Printing grade
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string string)
{
    int letters = 0;
    for (int i = 0, n = strlen(string); i < n; i++)
    {
        if (((int) string[i] >= 65 && (int) string[i] <= 90) || ((int) string[i] >= 97 && (int) string[i] <= 122))
        {
            letters++;
        }
    }
    printf("%i letter(s): \n", letters);
    return letters;
}

int count_words(string string)
{
    int words = 0;
    for (int j = 0, n = strlen(string); j < n; j++)
    {
        if ((int) string[j] == 32)
        {
            words++;
        }
    }
  // I can add one at the end for the last word because it didn't have a space
  // after it or just begining the variablle words with one. I prefer adding one
  // at the end beacuse a text with one word will give the right answer.
    printf("%i word(s): \n", words + 1);
    return words;
}

int count_sentences(string string)
{
    int sentences = 0;
    for (int z = 0, n = strlen(string); z < n; z++)
    {
        if (string[z] == 33 || string[z] == 46 || string[z] == 63)
        {
            sentences++;
        }
    }
    printf("%i sentence(s): \n", sentences);
    return sentences;
}

float index_calculating(int length, float array[])
{
    float index = 0.0588 * array[0] - 0.296 * array[1] - 15.8;
    printf("index: %f\n", index);
    return index;
}

int grade(float index)
{
    int grade = round(index);
    return grade;
}
