#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count, voter_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int y = 0; y < candidate_count; y++)
    {
        if (strcmp(name, candidates[y].name) == 0) // looks to see if the string 'name' matches the names of any of the candidates
        {
            candidates[y].votes++;  // if yes then it increases their vote count by one and...
            return true;   // ...and returns 'true'
        }
    }

    return false;
}

int win = 0;
int draw = 0;
int learn = 0;

// Print the winner (or winners) of the election
void print_winner(void)
{
    for (int z = 0; z < candidate_count; z++)
    {
        for (int w = 0; w < candidate_count; w++)
        {
            if ((candidates[z].votes) > (candidates[w].votes))
            {
                win++;
            }
            if ((candidates[z].votes) == (candidates[w].votes))
            {
                draw++;
            }

        }

        if (win == (candidate_count - 1))
        {
            learn++;
            printf("%s\n", candidates[z].name);
        }
        if (draw > 1 && learn == 0)
        {
            printf("%s\n", candidates[z].name);
        }

        win = 0;
        draw = 0;

    }

    return;
}
