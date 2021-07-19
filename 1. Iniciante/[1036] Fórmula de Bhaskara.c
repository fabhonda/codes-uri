#include <stdio.h>
#include <math.h>

int main(){
	
	double a, b, c, delta, r1, r2;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if((b!=0 || c!=0) && a==0){
		printf("Impossivel calcular\n");
	}
	else{
		delta = pow(b,2) - (4*a*c);
		if(delta<0){
			printf("Impossivel calcular\n");
		}
		else{
			r1 = (((-1)*b) + sqrt(delta))/(2*a);
			r2 = (((-1)*b) - sqrt(delta))/(2*a);
			printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
		}
	}
	
	
	return 0;
}
