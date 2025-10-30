#include<stdio.h>
//Ham in ra toan bo mang
void PrintArray(int A[], int n){
    for (int k=0; k < n; k++){
        printf("%d ", A[k]);
        }
    printf("\n");
}

//Ham swap
void Swap (int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//Chon chot va tach de chia thanh cac mang con
void Separate(int A[], int Start, int End, int n){
	if (Start >= End){ return; }
	int c = A[Start];
	int i = Start+1, j = End;
	while (i <= j){
		while (A[i] <= c && i <= j){i++;}
		while (A[j] > c && i <= j){j--;}
		if (i<j){ 
			Swap (&A[i], &A[j]);
            PrintArray(A, n);
		}
	}
	Swap (&A[Start], &A[j]);
    PrintArray(A, n);
	Separate(A, Start, j-1, n);
	Separate(A, j+1, End, n);
}

//Thuat toan sap xep nhanh
void QuickSort(int A[], int n){
	Separate (A, 0, n-1, n);
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
	QuickSort (A, n);
	return 0;
}