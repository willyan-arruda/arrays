#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
	int i, soma=0,j;
	int M[3][8], N[3][8], R[3][8], D[3][8];
		srand(time(NULL));
		for(i=0; i<3; i++){
			for(j=0; j<8; j++){
				M[i][j]=rand()%10;
				N[i][j]=rand()%10;
				R[i][j]=M[i][j]+N[i][j];
				D[i][j]=M[i][j]-N[i][j];
			}
		}
		printf("Matriz soma\n");
		for(i=0; i<3; i++){
			for(j=0; j<8; j++){				
				printf("%2d  ",R[i][j]);
			}
		puts("");
		}
		printf("Matriz diferença\n");
		for(i=0; i<3; i++){
			for(j=0; j<8; j++){
				printf("%2d  ",D[i][j]);
			}
		puts("");
		}		
		

return 0;
}
