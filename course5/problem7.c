# include "header.h"

int read_numbers()
{
    int nbr;
    printf("enter number : ");
    scanf("%d", &nbr);

    return nbr;
}
void print_reverse(int number)
{
    int remainder = 0;
    while(number > 0)
    {
        remainder = number % 10;
        printf("%d", remainder);
        number /= 10;
        //we can add (num2 = num2 * 10 + remainder) = 1234 =4321 like sum;

    }
    printf("\n");
}
int main()
{
    print_reverse(read_numbers());
}