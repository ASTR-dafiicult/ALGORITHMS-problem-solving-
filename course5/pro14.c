# include "header.h"

void letter_paterne(int n)
{
    int i = n + 65 - 1;
    int j;
    while(i >= 65)
    {
        j = 1;
        while(j <= n - (65 + n - 1 - i))
        {
            printf("%c", (char)i);
            j++;
        }
        i--;
        printf("\n");
    }
}
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    letter_paterne(n);
}