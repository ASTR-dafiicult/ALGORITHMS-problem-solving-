# include "header.h"

char encryption(char c)
{
    
    if(c >= 'a' && c <= 'z')
    {
        c += 2;
    }
    else if(c >= 'A' && c <= 'Z')
    {
        c += 2;
    }
    return c;
}
char decryption(char s)
{
        if(s >= 'a' && s <= 'z')
        {
            s -= 2;
        }
        else if(s >= 'A' && s <= 'Z')
        {
            s -= 2;
        }
        return s;
}
void ceasar_cipher_encrypted(char *str)
{
    while(*str)
    {
        *str = encryption(*str);
        str++;
    }
}
void ceasar_cipher_decryption(char *src)
{
    while(*src)
    {
        *src = decryption(*src);
        src++;
    }
}
int main()
{
    char str[100];
    printf("enter to (encryption/decryption) : ");
    scanf("%s", str);
    ceasar_cipher_encrypted(str);
    printf("text encrypted : %s\n", str);
    ceasar_cipher_decryption(str);
    printf("text decrypted : %s\n", str);   

}