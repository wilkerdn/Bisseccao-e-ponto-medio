#include<stdio.h>
#include<math.h>

double funcao(double x){
	double r, p, s, t;
	p = pow(x,5);
	s = 1.111111111*pow(x,3);
	t = 0.238095238*x;
	r = (p)-(s)+(t);
	return r;
}

int main(){
	double a=-0.75,b=-0.25,tol=0.0001,fa,fb,x,fx;
	//printf("Número 1 - Sendo x = ((a*fb)-(b*fa))/(fb-fa)\n");
	
	do{
		//for(int i=0;i<8;i++){ //quando pedi o número de interações
		fa = funcao(a);
		fb = funcao(b);
		x = ((a+b)/2); //bissecção
		//x = ((a*fb)-(b*fa))/(fb-fa); //ponto médio
		fx = funcao(x);
		printf("a = %lf | b = %lf | fa = %lf | fb = %lf | x = %lf | fx = %lf\n",a,b,fa,fb,x,fx);
		if((fx<0)&&(fb<0)&&(fa>0)){
			b = x;
			a = a;
		}else{
			a = x;
			b = b;
		}
		
		if(fx<0){
		fx = fx*-1;
		}
	//}
	}while(fx > tol);
	printf("A raiz e %lf\n",x);
	return 0;
}
