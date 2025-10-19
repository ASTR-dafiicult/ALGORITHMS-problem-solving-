# include "header.h"

int read_n()
{
    int nm;
    printf("enter n to find them : ");
    scanf("%d", &nm);
    return nm;
}
int *full_array(int nb)
{
    int *array = malloc(nb * sizeof (int));
    int i = 1;
    while(i <= nb)
    {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
        i++;
    }
    return array;
}
void print_it(int nbr)
{
    int *array2 = full_array(nbr);
    int i = 1;
    int ii = 0;
    int n = read_n();
    while(i <= nbr)
    {   
        if(array2[i] == n)
        {
            ii++;
        }
        i++;
    }
    int j = 1;
    printf("string : ");
    while(j <= nbr)
    {
        printf("%d  ", array2[j]);
        j++;
    }
    printf("\n%d find %d times\n", n, ii);
}
int main()
{
    int nn;
    printf("enter n : ");
    scanf("%d", &nn);
    print_it(nn);
}