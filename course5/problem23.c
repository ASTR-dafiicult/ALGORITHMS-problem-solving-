# include "header.h"

int random_number(int from, int to)
{
    int random = rand() % (to - from)+ from;
    return random;
}
int *generet_random(int array[100], int *lenght)
{
    int i = 0;
    while(i < *lenght)
    {
        array[i] = random_number(1, 100);
        i++;
    }
    return array;
}
void print_it(int array[100], int size)
{
    int *str = generet_random(array, &size);
    int i = 0;
    printf("random array : ");
    while(i < size)
    {
        printf("%d ", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    srand(time(NULL));
    int n;
    int array[100];
    printf("enter N :");
    scanf("%d", &n);
    print_it(array, n);
}
