# include "header.h"

int read_nbr()
{
    int nbr;
    printf("please enter numbers : ");
    scanf("%d", &nbr);

    return nbr;
}
void print_sum(int number)
{
    int remainder = 0;
    int sum = 0;

    while(number > 0)
    {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }
    printf("the sum = %d\n", sum);
}
int main()
{
    print_sum(read_nbr());
}