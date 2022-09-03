#include<stdio.h>

//int iteracion(int);

int iteracion(int n,int a){
	
	
	if (n<0){
		return 0;
	}
	if (n==0){
		return 1;
	}
	if (n==1){
		return a;
	}
	else{
		return iteracion(n-1,n*a);
	}
	
}


main(){
	
	
	int n,a=1;
	printf("Dame un numero: ");
	scanf("%d",&n);
	
	
	printf("%d",iteracion(n,a));
	
}
