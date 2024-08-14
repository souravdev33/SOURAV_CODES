
#include<string.h>
#include<stdio.h>
int main ()
{
    char s[50],ch;
    int i,vowel,consonant,digit,word,others;

    printf("Enter a string : ");
    gets(s);

    i=vowel=consonant=digit=word=others=0;

    while((ch=s[i])!='\0')
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
            vowel++;

        else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
            consonant++;

        else if(ch==' ')
        word++;
        
        else if(ch>='0' && ch<='9')
            digit++;
        
        else
            others++;

        i++;
    }
    word++;

    printf("The number of vowels : %d\n",vowel);
    printf("The number of consonant : %d\n",consonant);
    printf("The number of digit : %d\n",digit);
    printf("The number of word : %d\n",word);
    printf("The number of others : %d\n",others);

    return 0;
}