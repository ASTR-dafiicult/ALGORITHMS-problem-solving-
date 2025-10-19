# include "header.h"

typedef enum prime_or_not{prime=1, notprime=2}prm;

int read_n()
{
    int n;
    printf("enter N : ");
    scanf("%d", &n);

    return n;
}
prm  check(int n)
{
    int m = n / 2;
    int i = 2;
    while(i <= m)
    {
        if(n % 2 == 0)
        {
            return notprime;
        }
        i++;
    }
    return prime;
}
void print(int num)
{
    int i = 1;
    while(i <= num)
    {
        if(check(i) == prime)
        {
            printf("%d\n", i);
        }
        i++;
    }
}
int main()
{
    print(read_n());
}