#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
	int M[6][4], R[6][4];
	int MaiorElemento=0, i, j;

	srand(time(NULL));
	for(i=0; i<6; i++){
		for(j=0; j<4; j++){
			M[i][j]=rand()%100;
			printf("%2d ", M[i][j]);
			if(M[i][j]>MaiorElemento){
				MaiorElemento=M[i][j];
			}
		}
		for(j=0; j<4; j++){
			R[i][j]=MaiorElemento*M[i][j];
		}
		
		puts("");
	}
	puts("");
	puts("Matriz Resultado");
	for(i=0; i<6; i++){
		for(j=0; j<4; j++){
			printf("%2d ",R[i][j]);
		}
		puts("");
	}
	
return 0;
}
	
			
			
	
