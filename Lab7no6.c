#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random100to200();

int main(){
	int M,N,i,j,k,numok,rnum;
	int array[20][20];
	printf("array sizes:");
	scanf("%d %d",&M,&N);
	if (M<3) M=3;
	if (N>19) N=19;	
	
	srand(time(NULL));
	
	for (i=0;i<M*N;i++){
		numok = 1;
		while(numok==1){
			rnum=random100to200();
			
			numok = 0;
			for (j=0;j<M;j++){
				for (k=0;k<N;k++){
					if (array[j][k]==rnum)
					numok = 1;				
				}

			}
		}
		array[i/N][i%N]=rnum;	
	}
	
	for(j=0;j<M;j++){
		for (k=0;k<N;k++)
			printf("%d ",array[j][k]);
		printf("\n");
	}
	
	
	return 0;
}

int random100to200() {
    int random_num = (rand() % 101) + 100;   
    return random_num;
}

