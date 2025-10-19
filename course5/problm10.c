# include "header.h"

int numbers()
{
    int nbr;
    printf("enter nmbers : ");
    scanf("%d", &nbr);

    return nbr;
}
int reverse_numbers(int nbr)
{
    int rem = 0;
    int nbr2 = 0;
    while(nbr > 0)
    {
        rem = nbr % 10;
        nbr /= 10;
        nbr2 = nbr2 * 10 + rem;
    }
    return nbr2;
}
void order_print(int nbr)
{
    int rem = 0;
    int i = 0;
    while(i < nbr)
    {
        rem = nbr % 10;
        printf("%d\n", rem);
        nbr /= 10;
    }
}
int main()
{
    order_print(reverse_numbers(numbers()));
}