#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random1to100();

int main(){
	int N,i,j,rnum,numok;
	int A[100];
	scanf("%d",&N);
	if (N>100) 
		N=100;
	srand(time(NULL));
	printf("randomnumber :");
	
	for (i=0;i<N;i++){
		numok = 1;
		while(numok==1){
			rnum=random1to100();
			
			numok = 0;
			for (j=0;j<i;j++){
				if (A[j]==rnum)
					numok = 1;
			}
		}
		if (numok == 1)
			i--;
		else 
			A[i]=rnum;
		if (i==N-1)
			printf("\n");	
	}
	printf("\nA[%d] = {",N);
	for (i=0;i<N;i++){
		printf("%d",A[i]);
		if (i!=N-1)
			printf(",");
		else 
			printf("}\n");
	}
	
	return 0;
}

int random1to100() {
    int random_num = (rand() % 100) + 1;   
    printf("%d ", random_num);
    return random_num;
}

