#include <stdio.h>
long convert(long h,long m,long s);

int main(){
	long int hours,minutes,seconds;
	scanf("%ld %ld %ld",&hours,&minutes,&seconds);
	seconds = convert(hours,minutes,seconds);
	printf("%ld",seconds);
	return 0;
}

long convert(long h,long m,long s){
	long int result;
	result= (h*3600)+(m*60)+s;
	return result;
}

