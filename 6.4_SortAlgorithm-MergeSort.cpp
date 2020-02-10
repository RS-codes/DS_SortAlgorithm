/* 6.4 Sort Algorithm- Merge Sort */

/*
MergeSort- find mid, recursive Msort(l,mid) Msort(r,n-mid) and merge(left, right arrays)
*/


/*  Merge sort  */

#include <iostream>
#include <stdlib.h>

using namespace std;

void Merge( int *A,int *L,int *R,int lCount,int rCount )
{
	int i=0,j=0,k=0;
	while(i<lCount && j<rCount)
	{
		if(L[i] < R[j])
			A[k++] = L[i++];
		else
			A[k++] = R[j++];
	}
	while(i<lCount)
		A[k++] = L[i++];
	while(j<rCount)
		A[k++] = R[j++];
}

void MergeSort(int *A,int n)
{
	int mid,*L,*R;

	if(n<2) return;

	mid = n/2;

	L = (int *)malloc(mid*sizeof(int));
	R = (int *)malloc((n-mid)*sizeof(int));

	for(int i=0;i<mid;i++)
		L[i] = A[i];
	for(int i=mid;i<n;i++)
		R[i-mid] = A[n-i];

	MergeSort(L,mid);
	MergeSort(R,n-mid);
	Merge(A,L,R,mid,n-mid);
}

int main(int argc, char* argv[])
{
	int arr[] = {6,32,56,15,34,7,1,54,87,63,4,3};
	int n = sizeof(arr)/sizeof(arr[0]);

	MergeSort(arr,n);
	for(int i=0;i<n;i++)
		cout<< arr[i] << endl;
	return 0;
}


