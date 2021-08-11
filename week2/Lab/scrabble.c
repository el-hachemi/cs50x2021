#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

const int ALPHAB = 26;

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    printf("score1 %i\n", score1);
    printf("score2 %i\n", score2);

    // TODO: Print the winner

    if (score1 > score2)
    {
    printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
    printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute using the POINTS array and return score for string argument

    // Declaring and initialising the arrays of arguments "ARR" & "arr"
    int ARR[ALPHAB];
    
    ARR[0] = 65;
    for (int n = 0; n < ALPHAB; n++)
    {
        ARR[n + 1] = ARR[n] + 1;
    }

    int arr[ALPHAB];
    arr[0] = 97;
    for (int n = 0; n < ALPHAB; n++)
    {
       arr[n + 1] = arr[n] + 1;
    }

    // Declariing and insialising the variable "score"

    int score = 0;

 for (int i = 0; i < strlen(word); i++)
 {
     int point = 0;

    for (int j = 0; j < ALPHAB; j++)
    {
        if ((int) word[i] == arr[j] || word[i] == ARR[j])
        {
          point = POINTS[j];
        }
    }
   score += point;
  }
  return score;
}
