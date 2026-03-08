#include <stdlib.h> // Ganea Tudor luca
#include <stdio.h>

int function(int x)
{
    if (x <= 0) // daca x = 0 ne oprim din apeluri recursive
	return x;
    x=x-2;
    function(x);
    return x;  // afisam mereu x-2
}

int main(){
	int a=30, i=0;
	
	while (a>0)
	{
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;	
}
 // am rezolvat 