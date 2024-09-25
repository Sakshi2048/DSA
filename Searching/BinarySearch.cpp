/*
Binary Search
--------------
- It is a divide and conquer algorithm.
- Array should be sorted.
- Condition: Elements should be in monotonic functions

Time Complexity = O(log n)j
Space Complexity = O(1)

Worst Case : total comparisons = log(number of elements)
*/

#include <iostream>
using namespace std;

void take_input(int array[],int n){

    cout<<"Enter Elements in sorted manner"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Enter Element: ";
        cin>>array[i];
    }
}

void print_array(int array[],int n)
{
    cout<<"Array : ";
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int binary_search(int array[],int n,int x){

    int low=0;
    int high=n-1;

    while(low<=high){

        int mid=low+(high-low)/2;      //(low+high)/2

        if(array[mid]==x){
            return mid;
        }

        //Go to left part
        else if(array[mid]<x){
            low=mid+1;
        }

        //Go to right part
        else{
            high=mid-1;
        }
    }

    return -1;
}

int main()
{
    int array[10];

    take_input(array,10);
    print_array(array,10);
    
    int x;

    cout<<"Enter Number to Search: ";

    cin>>x;

    int result=binary_search(array,10,x);

    if(result==-1){
        cout<<"Not Found"<<endl;
    }

    else{
        cout<<"Found at index: "<<result<<endl;
    }

    print_array(array,10);

    return 0;

}