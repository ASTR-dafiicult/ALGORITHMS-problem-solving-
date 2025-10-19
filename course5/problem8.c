# include "header.h"

int read_numbers()
{
    int nbr;
    printf("enter number : ");
    scanf("%d", &nbr);

    return nbr;
}
int N_N()
{
    int n;
    printf("search for : ");
    scanf("%d", &n);
    return n;
}
void check(int nbr)
{
    int n = N_N();
    int remainder = 0;
    int sum = 0;
    while(nbr > 0)
    {
        remainder = nbr % 10;
        nbr /= 10;
        if(remainder == n)
        {
            sum++;
        }
    }
    printf("number %d is repeted %d times\n", n, sum);
}
int main()
{
    check(read_numbers());
}