#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
	int M[5][5];
	int Vl[5]={0};
	int Vc[5]={0};
	int i, j;
	
	srand(time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			M[i][j]=rand()%100;
			printf("%2d ", M[i][j]);
			Vl[i]+=M[i][j];
			Vc[j]+=M[i][j];
		}
		puts(""); 
	}
	printf("\nVetor Soma linhas\n");
	for (i=0;i<5; i++){
		printf("%2d ",Vl[i]);
	}
	putchar('\n');
	printf("\nVetor Soma colunas\n");
	for (j=0;j<5; j++){
		printf("%2d ",Vc[j]);
	}
	putchar('\n');
return 0;
}
