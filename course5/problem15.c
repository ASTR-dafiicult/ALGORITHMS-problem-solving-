# include "header.h"

int read_number()
{
    int n;
    printf("nter number : ");
    scanf("%d", &n);

    return n;
}
void letter_paterne(int n)
{
    int i = 65;
    int j;
    while(i <= n + 65 - 1)
    {
        j = 1;
        while(j <= n - (65 + n - 1 - i))
        {
            printf("%c", (char)i);
            j++;
        }
        i++;
        printf("\n");
    }
}
int main()
{
    letter_paterne(read_number());
}