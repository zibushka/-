
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
    printf("\n");
    // находим знечени полсе которого дожны закончить
    int w = mat[n-1][0], kn;
    // найдем точку отправки 
    if (n%2==0){
        kn = n/2 - 1;
    }
    else{
        kn = (n-n/2)-1;
    }
    // заведем точку которую будем гонять по матрице 
    int z=mat[kn][kn];
    
    for (int i = 1, stroka=kn, stolb=kn,  count=0, sh1=1, f=0, end = 0, d2 = 0; i != 0; i = i + 1){
        if (end != 0){
            break;
        }
        if (z == w){
            break;
        }
        printf("%d ", z);
        // если порядок матрицы чотный то 
        if (n%2==0){
            // пусть для четной ситуации будет 4 шага: 0-право 1-вниз 2-влево 3-вверх
            if (count == 0){
                if (f!=0){
                    for(int g=stroka, sh2 = 1; sh2 < sh1; sh2 = sh2+ 1){
                        printf("%d", mat[g][stolb+sh2]);
                        if (mat[g][stolb+sh2] == w){
                            end = end + 1;
                            break;
                        }
                    }
                }
                stolb=stolb + sh1;
                z = mat[stroka][stolb];
            }
            if (count == 1){
                if (f!=0){
                    for(int g=stolb, sh2 = 1; sh2 < sh1; sh2 = sh2+ 1){
                        printf("%d", mat[stroka+sh2][g]);
                        if (mat[stroka+sh2][g] == w){
                            end = end + 1;
                            break;
                        }
                    }
                }
                stroka=stroka + sh1;
                z = mat[stroka][stolb];
            }
            if (count == 2){
                for(int g=stroka, sh2 = 1; sh2 < sh1; sh2 = sh2+ 1){
                    printf("%d", mat[g][stolb-sh2]);
                    if (mat[g][stolb-sh2] == w){
                            end = end + 1;
                            break;
                        
                    }
                }
                stolb=stolb - sh1;
                z = mat[stroka][stolb];
                f = f + 1;
            }
            if (count == 3){
                for(int g=stolb, sh2 = 1; sh2 < sh1; sh2 = sh2+ 1){
                    printf("%d", mat[stroka-sh2][g]);
                    if (mat[stroka-sh2][g] == w){
                            end = end + 1;
                            break;
                        }
                }
                stroka=stroka - sh1;
                z = mat[stroka][stolb];
            }
        }
        // если порядок матрицы not чотный то
        if (n%2!=0){
            // пусть для не четной ситуации будет 4 шага: 0-лево 1-вверх 2-право 3-вниз
            if (count == 0){
                if (f!=0){
                    for(int g=stroka, sh2 = 1; sh2 < sh1; sh2 = sh2+ 1){
                        printf("%d ", mat[g][stolb-sh2]);
                        if (mat[g][stolb-sh2] == w){
                            end = end + 1;
                            break;
                        }
                    }
                }
                stolb=stolb - sh1;
                z = mat[stroka][stolb];
            }
            
            if (count == 1){
                if (f!=0){
                    for(int g=stolb, sh2 = 1; sh2 < sh1; sh2 = sh2+ 1){
                        printf("%d ", mat[stroka-sh2][g]);
                        if (mat[stroka-sh2][g] == w){
                            end = end + 1;
                            break;
                        }
                    }
                }
                stroka=stroka - sh1;
                z = mat[stroka][stolb];
            }
            
            if (count == 2){
                for(int g=stroka, sh2 = 1; sh2 < sh1; sh2 = sh2+ 1){
                    printf("%d ", mat[g][stolb+sh2]);
                    if (mat[g][stolb+sh2] == w){
                            end = end + 1;
                            break;
                        
                    }
                }
                stolb=stolb + sh1;
                z = mat[stroka][stolb];
                f = f + 1;
            }
            
            if (count == 3){
                for(int g=stolb, sh2 = 1; sh2 < sh1; sh2 = sh2+ 1){
                    printf("%d ", mat[stroka+sh2][g]);
                    if (mat[stroka+sh2][g] == w){
                            end = end + 1;
                            break;
                        }
                }
                stroka=stroka + sh1;
                z = mat[stroka][stolb];
            }
            
        }
        if (count == 1){
            sh1= sh1 + 1;
        }
        if (count == 3){
            sh1= sh1 + 1;
            count = 0;
        }
        else{
            count = count + 1;
        }
    }
}   
