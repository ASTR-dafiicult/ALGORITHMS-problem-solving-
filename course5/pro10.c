# include "header.h"

int read_N()
{
    int nbr;
    printf("enter numbr : ");
    scanf("%d", &nbr);

    return nbr;
}
int reverse_nbr(int nbr)
{
    int rem = 0;
    int nbr2 = 0;
    while(nbr > 0)
    {
        rem = nbr % 10;
        nbr /= 10;
        nbr2 = nbr2 * 10 + rem;
    }
}
void print_in_order(int nbr)
{
    int rem = 0;
    while(nbr > 0)
    {
        rem = nbr % 10;
        printf("%d\n", rem);
        nbr /= 10;
    }
}
int main()
{
    print_in_order(reverse_nbr(read_N()));
}