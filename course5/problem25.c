# include "header.h"

int random_nbr(int from, int to)
{
    int random = rand() % (to - from) + from;
    return random;
}
int *generet_number(int array[100], int *length)
{
    int i = 0;
    while(i < *length)
    {
        array[i] = random_nbr(1, 100);
        i++;
    }
    return array;
}
void print_random(int array[100], int size)
{
    generet_number(array, &size);
    int i = 0;
    int min = array[0];
    printf("string : ");
    while(i < size)
    {
        printf("%d ", array[i]);
        if(min > array[i])
        {
            min = array[i];
        }
        i++;
    }
    printf("\nminimum number %d \n", min);
}
int main()
{
    srand(time(0));
    int n;
    int array[100];
    printf("enter N : ");
    scanf("%d", &n);

    print_random(array, n);
}