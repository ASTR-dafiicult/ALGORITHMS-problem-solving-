# include "header.h"

void letter_AAA_ZZZ()
{
    int i = 65;
    int j;
    int k;
    while(i <= 90)
    {
        j = 65;
        while(j <= 90)
        {
            k = 65;
            while(k <= 90)
            {
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);
                write(1, "\n", 1);
                k++;
            }
            j++;
        }
        i++;
        write(1, "\n", 1);
    }
}
int main()
{
    letter_AAA_ZZZ();
}