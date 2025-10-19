# include "header.h"

int read_num()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    return n;
}
int check(int n)
{
    int i = 1;
    int sum = 0;
    while(i < n)
    {
        if(n % i == 0)
        sum += i;
        i++;
    }
    return n == sum;
}
void print(int n)
{
    if(check(n))
        printf("is perfect\n");
    else
        printf("not Perfect\n");
}
int main()
{
    print(read_num());
}
