#include <stdio.h>
#include <string.h>
int main()
{
    char s[80];
    int k, i, j, f=0, count=0;
    printf(" : ");
    gets(s);
    for (i = 0; s[i]!='.'; i++){
        if (count>0)
            break;
        for (j=i+1; f != 1; j++){
            if (s[j]=='A' || s[j]=='a' || s[j]=='B' || s[j]=='b' || s[j]=='C' || s[j]=='c' || s[j]=='D' || s[j]=='d' || s[j]=='E' || s[j]=='e' || s[j]=='F' || s[j]=='f' || s[j]=='G' || s[j]=='g' || s[j]=='H' || s[j]=='h' || s[j]=='I' || s[j]=='i' || s[j]=='J' || s[j]=='j' || s[j]=='K' || s[j]=='k' || s[j]=='L' || s[j]=='l' || s[j]=='M' || s[j]=='m' || s[j]=='N' || s[j]=='n' || s[j]=='O' || s[j]=='o' || s[j]=='P' || s[j]=='p' || s[j]=='Q' || s[j]=='q' || s[j]=='R' || s[j]=='r' || s[j]=='S' || s[j]=='s' || s[j]=='T' || s[j]=='t' || s[j]=='U' || s[j]=='u' || s[j]=='V' || s[j]=='v' || s[j]=='W' || s[j]=='w' || s[j]=='X' || s[j]=='x' || s[j]=='Y' || s[j]=='y' || s[j]=='Z' || s[j]=='z'){
                if (s[i]==s[j]){
                count = count + 1;
                }
            }
            else{
                f = 1;
                break;
            }
        }
        f = 0;
        
    }
    if (count!=0)
        printf("такое слово было ");
    else
        printf("такого слова не было ");
}
