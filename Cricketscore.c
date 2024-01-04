#include <stdio.h>
void main() 
{
    int n;
    char name[100];
    int r, totalRuns = 0;
    printf("Enter the number of players: ");
    scanf("%d", &n);
    printf("Enter info for %d players:\n",n);
    for (int i = 0; i < n; i++) 
    {
        printf("Enter player's name: ");
        scanf("%s", name);

        printf("Enter runs scored by %s: ", name);
        scanf("%d", &r);
        totalRuns += r;
    }
    printf("Total runs scored by Cricket team: %d\n", totalRuns);
}
