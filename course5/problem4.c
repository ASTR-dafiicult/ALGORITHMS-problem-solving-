#include "header.h"

int read_N()
{
    int n;
    printf("enter N : ");
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
        {
            sum += i;
        }
        i++;
    }
    return n == sum;
}
void print(int n)
{
    int i = 1;
    while(i < n)
    {
        if(check(i))
        
            printf("%d\n", i);
        
        i++;
    }
}
int main()
{
    print(read_N());
}