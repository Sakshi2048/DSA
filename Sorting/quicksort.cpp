
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

void quickSort(int arr[], int low, int high)
{
    // code here
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    // Your code here
    int i = low;
    int j = high;

    int p = arr[low];

    while (i < j)
    {
        while (arr[i] <= p && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > p && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[j], arr[low]);

    return j;
}

int main()
{

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int array[n];

    take_input(array, n);

    print_array(array, n);

    quickSort(array, 0, n - 1);

    print_array(array, n);

    return 0;
}