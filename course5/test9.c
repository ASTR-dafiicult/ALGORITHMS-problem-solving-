# include "header.h"

int read_number()
{
    int nbr;
    printf("N : ");
    scanf("%d", &nbr);

    return nbr;
}
int check_frequancy(int nbr, int i) /// nbr = 122 n = 1 / n = 1/ n = 2/n = 3
{
    int remainder = 0;
    int n = 0;
    while(nbr > 0)
    {
        remainder = nbr % 10; // rem = 1 / rem = 2/rem = 2/rem = 3
        nbr /= 10;
        if(remainder == i) // 1 == 1 / 2 == 2/ 2 == 2 / not 3
        {
            i++; // we found 1 one time /we foound 2 two times / 0 found
        }
    }
    return i; //return t print it 1 found 1 time/ print 2 found 2 times
}
void check_print_frq(int nbr)
{
    int i = 0;
    int freq = 0;
    while(i < 10)
    {
        freq = check_frequancy(nbr, i);
        if(freq > 0)
        {
            printf("number %d repeated %d times\n", i, freq);
        }
        i++;
    }
}
int main()
{
    check_print_frq(read_number());
}