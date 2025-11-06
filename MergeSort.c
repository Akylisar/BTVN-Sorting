#include<stdio.h>
//Ham in ra toan bo mang
void PrintArray(int A[], int n){
    for (int k=0; k < n; k++){
        printf("%d ", A[k]);
        }
    printf("\n");
}

//Ham de tron 2 mang
//L1 = A[m] + ... + A[n]
//L2 = A[n+1] + ... + A[p]
void MergeArray(int A[], int m, int n, int p){
	int i=m, j=n+1;
	while (i<j && j<=p){
		if (A[i] <= A[j]){ i++; }
		else{
			int temp = A[j];
            for (int k=j-1; k>=i; k--){
                A[k+1] = A[k];
            }
            A[i] = temp;
			i++;	j++;
		}
		PrintArray(A, n);
	}
}
//Tach de chia thanh cac mang con va tron
void SeparateArray(int A[], int Start, int End, int n){
	if (Start >= End){ return; }
	int c = (Start+End)/2;
	SeparateArray(A, Start, c, n);
	SeparateArray(A, c+1, End, n);
    MergeArray(A, Sart, c, End);
}

//Thuat toan sap xep tron
void MergeSort(int A[], int n){
	if (n<2){ return; }
	SeparateArray (A, 0, n-1, n);
	PrintArray(A, n);
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
	MergeSort (A, n);
	return 0;
}