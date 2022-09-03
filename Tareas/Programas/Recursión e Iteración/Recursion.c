#include<stdio.h>

int recursion(int);

int recursion(int n){
	
	
	if (n==0){
		n = 1;
	}
	else{
		n = n*recursion(n-1);
	}
	return n;
}


main(){
	
	
	int n;
	printf("Dame un numero: ");
	scanf("%d",&n);
	
	
	printf("%d",recursion(n));
	
}
