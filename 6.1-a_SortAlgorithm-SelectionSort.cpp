/* 6.1-a Sort Algorithm- Selection Sort */

/* SelectionSort- find min and swap recursively */

#include<iostream>
using namespace std;

int smallest(int *arr,int imin,int imax){
    int small=imin;
    for(int i=imin+1;i<=imax;i++){
        if(arr[small]>arr[i]){
            small=i;
        }
    }
    return small;
}

void Swap(int *arr,int index1,int index2){
    int temp;
    temp=arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=temp;
}

void selectionSort(int *arr,int imin,int imax){
    int ismall;
    for(int i=imin;i<=imax;i++){
        ismall=smallest(arr,i,imax);
        if(i!=ismall)
            Swap(arr,i,ismall);
    }
}

int main()
{
    int num;
    cout<<"how many elements: ";
    cin>>num;
    int *arr=new int;
    cout<<"Enter the numbers:\n";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    selectionSort(arr,0,num-1);
    cout<<"Sorted list is: \n";

    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

