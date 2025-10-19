# include "header.h"

int read_number()
{
    int nb;
    printf("enter number : ");
    scanf("%d", &nb);
    return nb;
}
/*
void print_paterne(int nb)
{
    for(int i = 1; i <= nb;i++)
    {
        for(int j = 1; j <= i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
*/
void print_paterne(int nb)
{
    int i = 1;
    int j;
    while(i <= nb)
    {
        j = 1;
        while(j <= i)
        {
            printf("%d", i);
            j++;
        }
        i++;
        printf("\n");
    }
}
int main()
{
    print_paterne(read_number());
}