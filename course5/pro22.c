# include "header.h"

int check_number()
{
    int nbr;
    printf("number to check : ");
    scanf("%d", &nbr);
    return nbr;
}
int read_n()
{
    int n;
    printf("enter N : ");
    scanf("%d", &n);

    return n;
}
void full_array(int array[100], int *length)
{
    *length = read_n();
    int i = 0;
    while(i < *length)
    {
        printf("array[%d] : ", i+1);
        scanf("%d", &array[i]);
        i++;
    }
}
void print_array(int array[100], int length)
{
    int i = 0;
    int ii = 0;
    int n = check_number();
    while(i < length)
    {
        if(array[i] == n)
        {
            ii++;
        }
        i++;
    }
    int j = 0;
    printf("original array : ");
    while(j < length)
    {
        printf("%d  ", array[j]);
        j++;
    }
    printf("\n");
    printf("%d repeated %d times \n", n, ii);
}
int main()
{
    int length;
    int array[100];
    full_array(array, &length);
    print_array(array, length);
}