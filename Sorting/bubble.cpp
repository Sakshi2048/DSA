/*
Bubble Sort
-----------
- Comparison-based Sorting algorithm
- Stable Sorting algorithm
- Swaps adjacent elements directly
- In each iteration, last element get sorted
- In-place algorithm
- Adaptable to different data types

Time Complexity = O(n^2)
Space Complexity = O(1)

maximum comparisons = n*(n-1)/2

Best Case : sorted array - O(n) - optimised
worst case : reverse sorted array - O(n^2)

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

void bubble_sort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        // For round 1 to n-1
        for (int j = 0; j < n - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

// Recursive Bubble Sort
void bubbleSort(int arr[], int n)
{

    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}

int main()
{

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int array[n];

    take_input(array, n);

    print_array(array, n);

    cout << "Bubble Sort = " << endl;

    bubble_sort(array, n);

    print_array(array, n);

    return 0;
}