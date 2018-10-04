#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
	int i, soma=0,j;
	int M[4][6], N[6][4];
		srand(time(NULL));
		for(i=0; i<4; i++){
			for(j=0; j<6; j++){
				M[i][j]=rand()%10;
				N[j][i]=rand()%10;
			}
		}
		for(i=0; i<4; i++){
			for(j=0; j<6; j++){
				soma+=M[i][j]+N[j][i];
			}
		}
		printf("%d\n",soma);

return 0;
}
