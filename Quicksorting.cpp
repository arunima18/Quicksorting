//Quicksorting

#include<iostream>
using namespace std;

//Swap Function
int Swap(int arr[],int a,int b)
{
    int p=arr[a];
    arr[a]=arr[b];
    arr[b]=p;
    
    //Display the swapped array
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}

//Partition Function
int Partition(int arr[],int m,int n)
{
    int pivot=4;
    for(int i=m;i<2;i++)
    {
        if(arr[1]>arr[pivot])
        {
            Swap(arr,1,(pivot-(i+1)));
        }
        else
        {
            if(arr[2]>arr[pivot])
            {
                Swap(arr,arr[2],arr[pivot-(i+1)]);
            }
        }
    }
    for(int j=0;j<5;j++)
    {
        cout<<arr[j];
    }
}

//Quicksort function
int QuickSort(int arr,int p,int q)
{
    int pivot=4;
    Partition(arr,0,4);
    Partition(arr,0,(pivot-1));
    Partition(arr,(pivot+1),4);
}

//main function
int main()
{
    int arr[]={5,3,8,9,6};
    int low=0;
    int high=4;
    Swap(arr,2,3);
    cout<<endl;
    Partition(arr,0,4);
    return 0;
}
