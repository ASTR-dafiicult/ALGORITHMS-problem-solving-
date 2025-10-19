# include "header.h"

void pattern(int nb)
{
    int i = 65;
    int j;
    while(i <= nb + 65 - 1)
    {
        j = 1;
        while(j <= i - 65 + 1)
        {
            write(1, &i, 1);
            j++;
        }
        i++;
        printf("\n");
    }
}
int main()
{
    int n;
    printf("entr number : ");
    scanf("%d", &n);
    pattern(n);
}