# include "header.h"

int read_number()
{
    int nb;
    printf("enter nbr : ");
    scanf("%d", &nb);

    return nb;
}
int reverse(int nbr)
{
    int rem = 0;
    int nbr2 = 0;
    while(nbr > 0)
    {
        rem = nbr % 10;
        nbr /= 10;
        nbr2 = nbr2 * 10 + rem;
    }
    return nbr2;
}
void print(int nbr) // bool type of function
{
    // return nbr == reverse(nbr);
    
    if(nbr == reverse(nbr))
    printf("palindrom\n");
    else
    printf("not palindrom\n");
}
int main()
{
    print(read_number());
   /* if(print(read_number()))
        printf("it's palindrom\n");
    else
        printf("not palindrom\n");
        */
}