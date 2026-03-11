//Program to find the number of Vowels and Consonants in an user input sentence
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int count_vowel=0,count_consonant=0;
    char word[40];
    printf("Enter a line:");
    fgets(word,sizeof(word),stdin);

    for(int i=0;i<strlen(word);i++)
    {
        char ch=tolower(word[i]);
        if(ch>='a' && ch<='z')
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count_vowel++;
            else 
            count_consonant++;
        }
       
    }

    printf("The Number of Vowels in the word are %d\n",count_vowel);
    printf("The Number of Consonants in the word are %d",count_consonant);
    return 0;
}

