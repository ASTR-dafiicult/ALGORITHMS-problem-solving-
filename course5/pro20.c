# include "header.h"

int rand_nbr(int from, int to)
{
    int random = rand() % (to - from + 1) + from;

    return random;
}
typedef enum random_char{
    charsmall=1, 
    charcapetal=2, 
    special=3, 
    digit=4
}rndm;

char random_switch(rndm type)
{
    if(type == charsmall)
    {
        return (char)rand_nbr(97, 122);
    }
    else if(type == charcapetal)
    {
        return (char)rand_nbr(65, 90);
    }
    else if(type == special)
    {
        return (char)rand_nbr(33, 47);
    }
    else if(type == digit)
    {
        return rand_nbr(1, 10);
    }
}
int main()
{
    srand(time(NULL));
    printf("%c\n", random_switch(charsmall));
    printf("%c\n", random_switch(charcapetal));
    printf("%c\n", random_switch(special));
    printf("%d\n", random_switch(digit));
}