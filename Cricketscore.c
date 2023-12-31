#include <stdio.h>
void main() 
{
    int n;
    char name[100];
    int runs, totalRuns = 0;
    printf("Enter the number of players: ");
    scanf("%d", &n);
    printf("Enter batting information for %d players:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Enter player's name: ");
        scanf("%s", name);

        printf("Enter runs scored by %s: ", name);
        scanf("%d", &runs);
        totalRuns += runs;
    }
    printf("Total runs scored by the cricket team: %d\n", totalRuns);
}
