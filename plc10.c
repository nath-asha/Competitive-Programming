#include<stdio.h>
int main()
{
    char word[20],gets(word);
    int a[26]={0};
    for(int i=0;i<strlen(word);i++)
    {
        a[word[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0)
        printf("%s",a[i]+97);
    }
}