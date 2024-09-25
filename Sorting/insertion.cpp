/*
Insertion Sort
---------------
- Comparison-based Sorting algorithm
- Stable Sorting algorithm
- In-place algorithm
- Adaptable


No. of rounds = n-1 (n = no. of elements)

Time Complexity = O(n^2)
Space Complexity = O(1)

Best Case : sorted array - O(n) - optimised
Worst Case : reverse sorted array - O(n^2)

*/

#include <iostream>
using namespace std;

void take_input(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element: ";
        cin >> array[i];
    }
}

void print_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int array[],int n)
{
    //Assume that the element at 0th index is already sorted and start from element at index 1
    for(int i=1; i<n; i++)
    {
        int temp=array[i];
        int j=i-1;
        for(; j>=0; j--)
        {
            if(array[j]>temp)
            {
               //shift
               array[j+1]=array[j];
            }
            else
            {
                break;
            }
        }
        array[j+1]=temp;
    }
}

//Recursive Insertion Sort

void insertionSort(int array[], int n)
{
    // Base case: If there's only one element, it's already sorted
    if (n <= 1)
        return;

    insertionSort(array, n - 1);

    // Insert the last element at its correct position
    int key = array[n - 1];
    int j = n - 2;
    while (j >= 0 && array[j] > key) {
        array[j + 1] = array[j];
        j--;
    }
    array[j + 1] = key;
}

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int array[n];

    take_input(array, n);

    print_array(array, n);

    cout<<"Insertion Sort = "<<endl;

    insertion_sort(array, n);

    print_array(array, n);
    
    return 0;
}