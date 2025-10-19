# include "header.h"

typedef enum {upper=1, small=2}rndm;

int random_nbr(int from , int to)
{
    return from + rand() % (to - from);
}
char generet_letter(rndm type)
{
    if(type == upper)
    {
        return (char)random_nbr(65, 90);
    }
    else if(type == small)
    {
        return (char)random_nbr(97, 122);
    }
}
char *generet_key(rndm key)
{
    int i = 0;
    char *result = malloc(4 * sizeof (char));
    while(i < 4)
    {
        result[i] = generet_letter(key);
        i++;
    }
    return result;
    free(result);
}
char *random_key(rndm key)
{
    int i = 0;
    char *str = malloc(4 * sizeof (char));
    while(i < 4)
    {
        strcat(str, generet_key(key));
        if(i != 3)
        {
            strcat(str, "-");
        }
        i++;
    }
    return str;
    free(str);
}
void print_gen(rndm key, int nb)
{
    int i = 1;
    
    while(i <= nb)
    {
        printf("key[%d] : %s\n",i,  random_key(key));
        i++;
    }
}
int main()
{
    int n;
    printf("enter N : ");
    scanf("%d", &n);
    srand(time(NULL));
    print_gen(upper, n);
}