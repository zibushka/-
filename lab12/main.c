#include <stdio.h>
#include <conio.h>
int main(){
	int i, d = 10;
	char mas[d];
	scanf("%s", mas);
	for(i=0;i<d;i=i+1){
		if (mas[i]=='0'){
		    mas[i]='9';
		}
		else{
		    if (mas[i]=='9'){
		        mas[i]='0';
		    }
		    
		}
		if (mas[i]=='1'){
		    mas[i]='8';
		}
		else{
		    if (mas[i]=='8'){
		        mas[i]='1';
		    }
		    
		}
		if (mas[i]=='2'){
		    mas[i]='7';
		}
		else{
		    if (mas[i]=='7'){
		        mas[i]='2';
		    }
		    
		}
		if (mas[i]=='3'){
		    mas[i]='6';
		}
		else{
		    if (mas[i]=='6'){
		        mas[i]='3';
		    }
		    
		}
		if (mas[i]=='4'){
		    mas[i]='5';
		}
		else{
		    if (mas[i]=='5'){
		        mas[i]='4';
		    }
		    
		}
		
	}
	mas[d]='\0';
	puts(mas);
	getch();
}
