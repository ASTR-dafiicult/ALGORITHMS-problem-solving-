# include "header.h"

int read_number()
{
    int nb;
    printf("enter number : ");
    scanf("%d", &nb);

    return nb;
}
void print_patern(int nbr)
{
    int i = 0;
    int j;
    int rem = 0;
    while(nbr > i)
    {
        rem = nbr % 10;
        int j = 0;
        while(nbr > j)
        {
            printf("%d", rem);
            j++;
        }
        printf("\n");
        nbr--;
    }
    printf("\n");
}
int main()
{
    print_patern(read_number());
}