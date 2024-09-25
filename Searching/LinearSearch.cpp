/*
Linear Search 
-------------
- It is a sequential search algorithm.
- Simplest 

Time Complexity = O(n)
Space Complexity = O(1)

Worst Case : total comparisons = number of elements present 
*/

#include <iostream>
using namespace std;

void take_input(int array[],int n){

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

int linear_search(int array[],int n,int x)
{
    for(int i=0; i<n; i++)
    {
        if(array[i] == x)
        {
            return i;
        }
    }
    return -1;
}

//Recursive
int linearSearch(int arr[],int n,int key){
    if(n==0){
        return -1;
    }

    if(arr[0]==key){
        return 0;
    }

    return linearSearch(arr+1,n-1,key);
};

int main(){
    
    int array[10];

    take_input(array,10);
    print_array(array,10);

    int x;
    cout<<"Enter Number to Search: ";
    cin>>x;

    int result = linear_search(array,10,x);

    if(result == -1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at index: "<<result;
    }

    return 0;
}