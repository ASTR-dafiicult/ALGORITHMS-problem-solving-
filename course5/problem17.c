# include "header.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void password(char str[3])
{
    int i = 65;
    int j;
    int ii = 1;
    int k;

    while(i <= 90)
    {
        j = 65;
        while(j <= 90)
        {
            k = 65;
            while(k <= 90)
            {
                ii++;
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k++);
                printf("\n");              
                if(str[0] == i && str[1] == j && str[2] == k)
                {
                    printf("%s\n", str);
                    printf("password %s\n", str);
                    printf("found after %d trial\n", ii);
                    exit(1);                
                }
            }
            j++;
        }
        i++;
    }
    printf("not found!\n");
}
int main()
{
    char str[3];
    printf("enter 3 characters to find them : ");
    scanf("%s", str);
    while(*str >= 97 && *str <= 122)
    {
        printf("enter letter uper-case : ");
        scanf("%s", str);
    }
    password(str);    

}