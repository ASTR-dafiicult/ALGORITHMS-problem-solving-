# include "header.h"

typedef enum{upper=1, digit=2}rando;
int random_number(int from, int to)
{
    return from + rand() % (to - from);
}
char random_letter(rando type)
{
    if(type == digit)
    {
        return random_number(1, 9);
    }
    else{
        return (char)random_number(65, 90);
    }
}
char *generet_word(rando key)
{
    char *str = malloc(4 * sizeof (char));
    int i = 0;
    while(i < 4)
    {
        str[i] = random_letter(key);
        i++;
    }
    return str;
}
char *strcat_dyali(char *src, char *dest)
{
    int i = 0;
    while(src[i])
    {
        i++;
    }
    int j = 0;
    while(dest[j])
    {
        src[i] = dest[j];
        i++;
        j++;
    }
        src[i] = '\0';
    return src;
}
char *generet_key(rando key)
{
    char *str2 = malloc(4 * sizeof (char));
    int i = 0;
    while(i < 4)
    {
        strcat_dyali(str2, generet_word(key));
        if(i != 3)
        {
            strcat_dyali(str2, "-");
        }
        i++;
    }
    return str2;
}
void print_keys(rando keys, int nb)
{
    int i = 1;
    while(i <= nb)
    {
        char *key = generet_key(keys);
        printf("key[%d] : %s\n",i ,key);
        i++;
    }
}
int main()
{
    srand(time(NULL));
    int n;
    printf("enter N : ");
    scanf("%d", &n);

    print_keys(upper, n);
}