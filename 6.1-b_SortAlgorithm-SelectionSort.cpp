/* 6.1-b Sort Algorithm- Selection Sort */

/*Time complexity: O(n2)*/

#include<iostream>
using namespace std;

void selectionSort(int A[],int n){
    for(int i=0;i<n-1;i++){   //we need to do n-2 passes
        int iMin=i;  //ith position elements from i till n-1 are candidates
        for(int j=i+1;j<n;j++){
            if(A[j]<A[iMin])
                iMin=j;   //update the index of minimum element
        }
        int temp=A[i];
        A[i]=A[iMin];
        A[iMin]=temp;
    }
}

int main()
{
    int num;
    cout<<"How many elements: ";
    cin>>num;
    int *A=new int;  //if pgm crashes, use=> int *A=new int[num];
    cout<<"Enter the numbers: \n";
    for(int i=0;i<num;i++){
        cin>>A[i];
    }
    //int A[]={2,7,4,1,5,3};
    cout<<"Sorted list: ";
    selectionSort(A,num);
    for(int i=0;i<num;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}


