#include <stdio.h>
#include <string.h>
int main()
{
    char s[80], ss[]= ".*";
    int k, i, j, count=0;
    printf(": ");
    gets(s);
    for (k = 0; s[k]!='\0'; k++){
        if(s[k]==' ')
        {
            s[k]='.';
            
        }
    }
    strcat (s, ss);
    for (i = 0; s[i]!='*'; i++){
        if (count>0)
            break;
        for (j=i+1; s[j]!='.'; j++){
            if (s[i]==s[j]){
                count = count + 1;
            }
        }
        
    }
    if (count!=0)
        printf("такое слово было ");
    else
        printf("такого слова не было ");
}
