# include "header.h"

int num_to_num()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    return n;
}
void reverse(int number)
{
    int remainder = 0;
    while(number > 0)
    {
        remainder = number % 10;
        printf("%d\n", remainder);
        number = number / 10;
    }
}
int main()
{
    reverse(num_to_num());
}