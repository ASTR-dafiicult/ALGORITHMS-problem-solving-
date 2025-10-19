# include "header.h"

int read_N()
{
    int nbr;
    printf("enter number : ");
    scanf("%d", &nbr);

    return nbr;
}
int frequancy(int number, int n)
{
    int remainder = 0;
    int i = 0;
    while(number > 0)
    {
        remainder = number % 10;
        number /= 10;
        if(n == remainder)
        {
            i++;
        }
    }
    return i;
}
void print_freq(int number)
{
    int freq = 0;
    int i = 0;
    while(i < 10)
    {
        freq = frequancy(number, i);
        if(freq > 0)
            printf("number %d is repeated %d times\n", i, freq);
        i++;
    }
}
int main()
{
   print_freq(read_N());
}