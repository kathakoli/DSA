#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void displayArray(int *arr, int size)
{
    
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int partition(int *arr, int low, int high)
{
    int i=low-1;
    
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<arr[high])
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quick_sort(int *arr,int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
       
    }
}

int main()
{
    int arr[]={16,3,-9,0,11,16,31,18};
    quick_sort(arr,0,7);
    displayArray(arr,7);
    
}
