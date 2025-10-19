# include "header.h"

int rnd_number(int from, int to)
{
    int random = rand() % (to - from + 1) + from;

    return random;
}
typedef enum random{ 
    smalchar=1,
    capitalchar=2,
    specialchar=3,
    digit=4,
}randm;
char random_char(randm type)
{
    if(type == smalchar)    
    {
        return (char)rnd_number(97, 122);
    }
    else if(type == capitalchar)
    {
        return (char)rnd_number(65, 90);
    }
    else if(type == specialchar)
    {
        return (char)rnd_number(33, 47);
    }
    else if(type == digit)
    {
        return rnd_number(1, 10);
    }
}
int main()
{
    srand(time(NULL));
    printf("%c\n", random_char(smalchar));
    printf("%c\n", random_char(capitalchar));
    printf("%c\n", random_char(specialchar));
    printf("%d\n", random_char(digit));
}