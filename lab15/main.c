#include <stdio.h>
int main()
{
    int n = 0;
    printf("порядок матрицы = ");
    scanf("%d", &n);
    int mat[n][n];
    printf("введите матрицу :\n");
    //задаём матрицу nxn
    for(int i=0; i < n; i=i+1){
        for(int j=0; j < n; j=j+1){
            scanf("%d", &mat[i][j]);
        }
    }
    //выводим матрицу nxn
    printf("Ваша матрица\n");
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // найдем макисмаьное и минимальное произведение  
    int mi = 99999999, ma = 0, p=1;
    for (int stroka = 0; stroka < n; stroka=stroka + 1){
        for (int stolb = 0; stolb < n; stolb=stolb + 1){
            p=p*mat[stroka][stolb];
        }
        if (p>ma){
            ma = p;
        }
        if (p<mi){
            mi = p;
        }
        p = 1;
        
    }

    
    // так как знаем значение макс и мин произв по этим значениям найдем номера строчек
    int nma, nmi;
    for (int stroka = 0; stroka < n; stroka=stroka + 1){
        for (int stolb = 0; stolb < n; stolb=stolb + 1){
            p=p*mat[stroka][stolb];
        }
        if (p == ma){
            nma = stroka;
        }
        if (p == mi){
            nmi = stroka;
        }
        p = 1;
        
    }
    // теперь мы знаем номера строк макс и мин будем теперь менять 
    for (int stolb = 0, dop; stolb < n; stolb=stolb + 1){
        dop = mat[nma][stolb];
        mat[nma][stolb] = mat[nmi][stolb];
        mat[nmi][stolb] = dop;
        
    }
    //выводим матрицу nxn
    printf("Ваша матрица стала вот такой \n");
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
}
