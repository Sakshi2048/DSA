
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

void merge(int *arr, int l, int m, int r)
{
    int n1 = m - l + 1; // Size of the left subarray
    int n2 = r - m;     // Size of the right subarray

    // Temporary arrays to store left and right subarrays
    int left[n1], right[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[m + 1 + j];
    }

    // Merge the two sorted subarrays
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2; // Calculate the midpoint

        // Recursively sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
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

    mergeSort(array, 0, n - 1);

    print_array(array, n);

    return 0;
}