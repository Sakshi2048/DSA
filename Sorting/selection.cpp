/*
Selection Sort
--------------
- unstable Sorting algorithm
- It selects the smallest element from an unsorted array and places that element at the beginning of the array.
- In-place algorithm

Total Passes = n-1

Space Complexity = O(1)
Time Complexity = O(n^2)

Best Case : sorted array - O(n^2)
Worst Case : unsorted array - O(n^2)

Use case - to sort array / list / vector of small size

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

void selection_sort(int array[], int n)
{
    cout << "Sorting the Array" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        swap(array[i], array[min_index]);
    }
}

int main()
{

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int array[n];

    take_input(array, n);

    print_array(array, n);

    selection_sort(array, n);

    print_array(array, n);

    return 0;
}