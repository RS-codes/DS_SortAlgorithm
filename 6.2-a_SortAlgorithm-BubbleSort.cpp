/* 6.2-a Sort Algorithm- Bubble Sort */

/* 
BubbleSort- compare with adjacent element and swap, if greater(bubbles largest number up) 
*/

/*  bubble sort  */

#include <iostream>

using namespace std;

void bubbleSort(int array[], int length)
{
    for(int i = 0; i < length - 1; i ++)
    {
        for(int j = length - 1; j > i; j--)
        {
            if(array[j-1] > array[j])
            {
                // Swap elements if the lower-indexed key's value is greater
                // than its higher-indexed neighbor
                array[j] = array[j-1] + array[j];
                array[j-1] = array[j] - array[j-1];
                array[j] = array[j] - array[j-1];
            }
        }
    }
}

int main()
{
    int array[] = {11, 23, 34, 24, 3, 45, 112, 44, 73, 89};
    int length = sizeof(array) / sizeof(int);
    bubbleSort(array, length);
    for(int i = 0; i < length; i++)
    {
        cout<<"The "<<i + 1<<"th element is: "<<array[i]<<endl;
    }
}

