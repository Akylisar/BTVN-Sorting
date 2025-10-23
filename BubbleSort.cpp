#include<stdio.h>
//Thuat toan noi bot
void BubbleSort(int A[], int n){
	int temp, i, j;
	for (i=0; i < n-2; i++){
		for (j=n-1; j > i; j--){
			if (A[j]<A[j-1]){
				temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
			}
		}
		//In ra day sau moi luot
		for (int k=0; k < n; k++) {
                printf("%d ", A[k]);
            }
            printf("\n");
	}
}
//Sap xep tu be den lon
int main(){
	int n, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	int A[n];
	for (int i=0; i < n; i++){
		scanf("%d", &A[i]);
	}
	BubbleSort (A, n);
	return 0;
}