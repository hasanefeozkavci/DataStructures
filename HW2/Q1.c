#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct polinom
     {   int ust;
         int katsayi;
         struct polinom *sonraki;
     }POL;
int main(){
	int n, i;
	printf("Kacinci dereceden polinom olacak?\n");scanf("%d", &n);
	int A[n+1];
	printf("Sabit terimi giriniz.\n");scanf("%d", &A[n]);
	for(i = n-1;i>=0;i--){
		printf("%d Dereceli katsayiyi giriniz:", i+1);scanf("%d", &A[i]);
	}
	printf("A dizisi: \n");
	for(i = 0; i<=n;i++){
		printf("%d ", A[i]);
	}
	return 0;
}
