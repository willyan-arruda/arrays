#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
	int i, j, n;
	
	
	printf("Digite o número máximo");
	scanf("%d", &n);
	char M[n];
	
	for(i=0; i<n; i++, putchar('\n')){
		for(j=0; j<n; j++){
			if(j>=i && j<n-i)
				putchar('1'+j);
			else
				putchar(' ');
		}
	}
	

	putchar('\n');

return 0;
}
