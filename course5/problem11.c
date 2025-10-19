# include "header.h"

int read_number()
{
    int nbr;
    printf("enter number : ");
    scanf("%d", &nbr);

    return nbr;
}
void check(int nbr)
{
    int rem = 0;
    int nbr2 = 0;
    int res = nbr;
    while(nbr > 0)
    {
        rem = nbr % 10;
        nbr /= 10;
        nbr2 = nbr2 * 10 + rem;
    }
    if(nbr2 == res)
    printf("palidrom\n");
    else
    printf("not polidrom\n");
}
int main()
{
    check(read_number());
}