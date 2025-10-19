# include "header.h"

int random_numbers(int from, int to)
{
    int random = rand() % (to - from)+from;
    return random;
}
int *generet_random(int array[100], int *length)
{
    int i = 0;
    while(i < *length)
    {
        array[i] = random_numbers(1, 100);
        i++;
    }
    return array;
}
void print_it(int array[100], int size)
{
    generet_random(array, &size);
    int i = 0;
    int max = array[0];
    printf("array : ");
    while(i <size)
    {
        printf("%d ", array[i]);
        if(array[i] > max)
        {
            max = array[i];
        }
        i++;
    }
    printf("\n");
    printf("the max number are %d \n", max);
}
int main()
{
    srand(time(0));
    int n;
    int arry[100];
    printf("enter N : ");
    scanf("%d", &n);

    print_it(arry, n);
}