# include "header.h"

int lettr()
{
    int c;
    printf("enter letter : ");
    scanf("%d", &c);
    return c;
}
void reverse_letters(int nb)
{
    int i = 65 + nb - 1;
    int j;
    while(i >= 65)
    {
        j = 1;
        while(j <= nb - (65 + nb - 1 - i))
        {
            printf("%c", (char)i);
            j++;
        }
        i--;
        printf("\n");
    }  
}
int main()
{
    reverse_letters(lettr());
}