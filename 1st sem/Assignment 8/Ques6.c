//Program to create an encryption and decryption function to a message 
#include <stdio.h>
#include <string.h>

void decrypt(char message[])
{
    for(int i=0;i<strlen(message);i++)
    {
        message[i] = message[i] - 1;
    }
    printf("The decrypted message:%s",message);
}

void encrypt(char message[])
{
    for(int i=0;i<strlen(message);i++)
    {
        message[i] = message[i] + 1;
    }
    printf("The encrypted message:%s",message);
    char check[5];
    printf("Would you like see the decrypted message?[Yes/No]:");
    fgets(check,sizeof(check),stdin);

    check[strcspn(check,"\n")]='\0';//remove the newline
    if (strcmp(check,"Yes")==0 || strcmp(check,"yes")==0)
    decrypt(message);
}

int main()
{
    char message[50];
    printf("Enter a message:");
    fgets(message,sizeof(message),stdin);
    encrypt(message);
    return 0;
}