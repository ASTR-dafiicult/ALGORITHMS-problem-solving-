# include "header.h"

void password()
{
    char a = 'A';
    char b = 'A';
    char c = 'F';

    int i = 65;
    int ii = 1;
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
                if(i == a && j == b && k == c)
                {
                    printf("find after %d trial\n",ii);
                    printf("password %c%c%c\n", a, b, c);
                    exit(1);
                }
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);
                write(1, "\n", 1);
                k++;
                ii++;
            }
            j++;
        }
        i++;
    }
}
int main()
{
    password();
}