#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
	int main(){
	int n, i, j, g, b;
	double d=0; 
	
	printf("Digite a ordem 'n' da matriz para alocar\n");
	scanf("%d", &n);
	g=n;
	b=n;
	
	int M[g][b];
	double R[g][b];

	srand(time(NULL));
	for(i=0; i<g; i++){
		for(j=0; j<b; j++){
			M[i][j]=rand()%100;
			printf("%2d ", M[i][j]);
		}
		puts("");
	}
	printf("Digite um número double\n");
	scanf("%lf", &d);
	for(i=0; i<g; i++){
		for(j=0; j<b; j++){
			R[i][j]=d*M[i][j];
			printf("%5.2lf ", R[i][j]);
		}
		puts("");
	}		

return 0;
}
		
	
