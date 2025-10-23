#include<stdio.h>
//Thuat toan sap xep chen
void InsertSort(int A[], int n){
	int temp, i, j;
	for (i=0; i < n; i++){
		temp = A[i];
		j = i-1;
		while ((temp < A[j]) && (j>=0)){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = temp;
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
	InsertSort (A, n);
	return 0;
}