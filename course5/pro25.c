# include "header.h"

int random_nbr(int from, int to)
{
    int random = rand() % (to - from + 1) + from;

    return random;
}
int *generet_digit(int nb)
{
    int *array = malloc(nb * sizeof(int));
    int i = 0;
    while(i < nb)
    {
        array[i] = random_nbr(1, 100);
        i++;
    }
    return array;
}
void print_random(int nb)
{
    int *array = generet_digit(nb);
    int i = 0;
    int min = array[0];
    printf("array : ");
    while(i < nb)
    {
        printf("%d ", array[i]);
        if(min > array[i])
        {
            min = array[i];
        }
        i++;
    }
    printf("\nmin : %d\n", min);
}
int main()
{
    srand(time(0));
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    print_random(n);
}