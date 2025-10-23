#include<stdio.h>
//Thuat toan sap xep lua chon
void SelectionSort(int A[], int n){
	int temp, i, j, min;
	for (i=0; i < n-1; i++){
		min = i;
		for (j=i+1; j<n; j++){
			if(A[j] < A[min]){
				min = j;
			}
		}
		if (min != i){
			temp = A[min];
			A[min] = A[i];
			A[i] = temp;
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
	SelectionSort (A, n);
	return 0;
}