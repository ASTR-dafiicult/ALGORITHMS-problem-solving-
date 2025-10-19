# include "header.h"

void header()
{
    printf("\t\t\t\t Multiplication table From 1 to 10\t\t\t\n\n");
    int i = 1;
    while(i <= 10)
    {
        printf("\t%d", i);
        i++;
    }
    printf("\n");
    printf("--------------------------------------------------------------------------------------\n");
}
char *colom(int i)
{
    if(i < 10)
    {
        return "    |";
    }
    else{
        return "   |";
    }
}
char print_table()
{
    header();
    int i = 1;
    int j;
    int res;
    while(i <= 10)
    {
        
        printf("%d", i);
        printf("%s", colom(i));
        j = 1;
        while(j <= 10)
        {
            res = j * i;
            printf("\t%d", res);
            j++;
        }
        printf("\n");
        i++;
    }
}
int main()
{
    print_table();
}