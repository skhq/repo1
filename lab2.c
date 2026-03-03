#include <stdlib.h> // Ganea Tudor luca
#include <stdio.h>

int function(int x){        // am scos apelarea recursiva pentru ca era un loop infinit 
	x=x-2;
	return x;
}

int main(){
	int a=30, i=0;
	
	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;	
}
 // am rezolvat 