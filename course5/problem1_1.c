# include "header.h"

void header()
{
    printf("\t\t\tTableau De Multiplication 1-10\n");
    
    int i = 1;
    while(i <= 10)
    {
        printf("\t%d", i);
        i++;
    }
    printf("\n");
    printf("***********************************************************************************\n");
}
char *colom_separe(int i)
{ 
    if(i < 10)
    {
        return "  |";
    }
    else
    {
        return " |";
    }
}
void print_tableau()
{
    int i = 1;
    int res;
    int j;
    header();
    while(i <= 10)
    {
        printf("%d", i);
        printf("%s ", colom_separe(i));
        j = 1;
        while(j <= 10)
        {
            res = j * i;
            printf("\t%d  ", res);
            j++;
        }
        printf("\n");
        i++;
    }
}
int main()
{
    print_tableau();
}
