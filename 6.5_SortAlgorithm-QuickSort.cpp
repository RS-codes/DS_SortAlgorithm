/* 6.5 Sort Algorithm- Quick Sort */

/*
QuickSort- partitionIndex,pivot,Partition-swap PI with End,recursive Qsort(start,PI-1) and  Qsort(PI+1,End)
*/


/*  Quick sort  */


#include <iostream>
using namespace std;
int Partition(int *A,int Start,int End){
    int pivot=A[End];
    int partitionIndex=Start;  //set partition index as start initially
    for(int i=Start;i<End;i++){
        if(A[i]<pivot){
            swap(A[i],A[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(A[partitionIndex],A[End]);
    return partitionIndex;
}

void QuickSort(int *A,int Start,int End){
    if(Start<End){
        int partitionIndex=Partition(A,Start,End);
        QuickSort(A,Start,partitionIndex-1);
        QuickSort(A,partitionIndex+1,End);
    }
}

int main()
{
    int num;
    cout<<"How many elements: ";
    cin>>num;
    int *A=new int[num];
    cout<<"Enter the numbers: \n";
    for(int i=0;i<num;i++){
        cin>>A[i];
    }
    cout<<"Sorted list: ";

    QuickSort(A,0,num-1);   //ATTENTION : num-1
    for(int i=0;i<num;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}

