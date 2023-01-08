#include <stdio.h>
#include <math.h>
int main(){
	int ch0, ch, ch1, new = 0, f, k = 0;
	scanf("%d\n", &ch);
	ch0 = ch;
	for (int i; ch != 0; k = k + 1 ){
	    ch1 = ch % 10;

	    if (ch >= 1){
	        ch = ch - ch1;
	        ch = ch / 10;
	    }
	}
	int s = 0;
	for (int i; k!= 0; k = k - 1){
	    ch1 = ch0 % 10;
	    
	    if (ch1==0){
		    new = new + 9*pow(10, s);
		}
		else{
		    if (ch1==9){
		        new = new + 0*pow(10, s);
		    }
		    
		}
		if (ch1==1){
		    new = new + 8*pow(10, s);
		}
		else{
		    if (ch1==8){
		        new = new + 1*pow(10, s);
		    }
		    
		}
		if (ch1==2){
		    new = new + 7*pow(10, s);
		}
		else{
		    if (ch1==7){
		        new = new + 2*pow(10, s);
		    }
		    
		}
		if (ch1==3){
		    new = new + 6*pow(10, s);
		}
		else{
		    if (ch1==6){
		        new = new + 3*pow(10, s);
		    }
		    
		}
		if (ch1==4){
		    new = new + 5*pow(10, s);
		}
		else{
		    if (ch1==5){
		        new = new + 4*pow(10, s);
		    }
		    
		}
		s = s + 1;
		ch0 = ch0 - ch1;
		ch0 = ch0 / 10;
	}
	printf("%d\n", new);
}
	

