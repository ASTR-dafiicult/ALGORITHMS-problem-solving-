# include "header.h"

int random_nbr(int from, int to)
{
    int random = from + rand() % (to - from + 1);

    return random;
}
int main()
{
    int nbr;
    printf("enter number (1-10) : ");
    scanf("%d", &nbr);

    srand(time(NULL));
    if(nbr == random_nbr(1, 10))
    {
        printf("yes you right : %d\n", nbr);
    }
    else
    {
        printf("OOPS!\n");
    }
    //printf("%d\n", random_nbr(5, 20));

    //printf("%d\n", random_nbr(5, 20));
    //printf("%d\n", random_nbr(5, 20));


}