/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], p[100], v[100], f1 = 1, f11 = 1, f2 = 1, f22 = 1, y = 0;
    int dl, i = 0, count;
    printf(":\n");
    gets(s);
    printf("\n");
    dl = strlen (s);
    count = dl;
    
    //for (i; i < dl; i = i + 1){
      //  printf("%c", s[count]);
        //count = count - 1;
    //}
    //if (s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
    for (i; f1 != 0; i = i + 1 ){
        if (s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
            f1 = 0;
            for (int j = i; f11 != 0; j = j + 1){
                if (s[j]=='0' || s[j]=='1' || s[j]=='2' || s[j]=='3' || s[j]=='4' || s[j]=='5' || s[j]=='6' || s[j]=='7' || s[j]=='8' || s[j]=='9'){
                    p[y] = s[j];
                    y = y + 1;
                }
                else{
                    f11 = 0;
                }
            }
        }
    }
    y = 0;
    int dl2 = 0;
    for (int i = 0; f2 != 0; i = i + 1 ){
        count = count - 1;
        if (s[count]=='0' || s[count]=='1' || s[count]=='2' || s[count]=='3' || s[count]=='4' || s[count]=='5' || s[count]=='6' || s[count]=='7' || s[count]=='8' || s[count]=='9'){
            f2 = 0;
            for (int j = i; f22 != 0; j = j + 1){
                if (s[count]=='0' || s[count]=='1' || s[count]=='2' || s[count]=='3' || s[count]=='4' || s[count]=='5' || s[count]=='6' || s[count]=='7' || s[count]=='8' || s[count]=='9'){
                    v[y] = s[count];
                    count = count - 1;
                    y = y + 1;
                    dl2 = dl2 + 1;
                }
                else{
                    f22 = 0;
                }
            }
        }
        
    }
    char vz[100];
    count = dl2 - 1;
    printf("%d\n", dl2);
    printf("первое число - %s\n", p);
    if (dl2 != 1){
        for (int i = 0; i < dl2; i = i + 1){
            vz[i] = v[count];
            count = count - 1;
        }
        printf("второе число - %s\n", vz);
    }
    else{
        printf("второе число - %s\n", v);
    }
    
    return 0;
}
