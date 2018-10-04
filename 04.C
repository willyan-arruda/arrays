#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
	int main(){
	int n,i,j;
	int l,l2,c,c2,somacoluna=0, somalinha=0, somadiagonal=0, somadiagonal2=0,somatotal=0;

	printf("Digite a ordem 'n' da matriz para alocar\n");
	scanf("%d", &n);
	
	int M[n][n];

	srand(time(NULL));
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			M[i][j]=rand()%100;
			printf("%2d ", M[i][j]);
			somatotal=somatotal+M[i][j];
			if (i==j){
				somadiagonal+=M[i][j];
			}
			if (j==(n-1-i)){
				somadiagonal2+=M[i][j];
			}
		}
		puts("");
	}
	//----------------------------------------------------------------------//
	
	printf("Digite a linha a ser somada \n");
	scanf("%d", &l);
	
	l2=l-1;
	for(j=0;j<n;j++){	
		somalinha=somalinha+M[l2][j];
	}
	printf("A soma dos elementos da linha %d eh: %d\n", l ,somalinha);
	system("sleep 01");
	puts("");
	
	//----------------------------------------------------------------------//

	printf("Digite a coluna a ser somada \n");
	scanf("%d", &c);
	
	c2=c-1;
	for(i=0;i<n;i++){	
		somacoluna=somacoluna+M[i][c2];
	}
	printf("A soma dos elementos da coluna %d eh: %d\n", c ,somacoluna);
	system("sleep 01");
	puts("");

	//----------------------------------------------------------------------//
	
	printf("A soma dos elementos da diagonal principal eh: %d\n", somadiagonal);
	system("sleep 01");
	puts("");

	//----------------------------------------------------------------------//

	printf("A soma dos elementos da diagonal secundária eh: %d\n", somadiagonal2);
	system("sleep 01");
	puts("");

	//----------------------------------------------------------------------//

	printf("A soma de todos elementos eh: %d\n", somatotal);
	system("sleep 01");
	puts("");

	//----------------------------------------------------------------------//

return 0;
}
			
	
	
