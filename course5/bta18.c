# include "header.h"

void encryption(char *str, char shift)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] += shift;
            if(str[i] > 'z')
            str[i] -= 26;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += shift;
            if(str[i] > 'Z')
            str[i] -= 26;
        }
        i++;
    }
    printf("encryption texte %s\n", str);
}
void decryption(char *src, char shift)
{
    int j = 0;
    while(src[j])
    {
        if(src[j] >= 'a' && src[j] <= 'z')
        {
            src[j] -= shift;
            if(src[j] < 'a')
            src[j] += 26;
        }
        else if(src[j] >= 'A' && src[j] <= 'Z')
        {
            src[j] -= shift;
            if(src[j] < 'A')
            src[j] += 26;
        }
        j++;
    }
    printf("decryption texte %s\n", src);
}
int main()
{
    char str[100];
    int key = 2;
    printf("enter to (encryption/decryption) : ");
    scanf("%s", str);
    printf("string after encryption : %s\n", str);
    encryption(str, key);
    decryption(str, key);
}