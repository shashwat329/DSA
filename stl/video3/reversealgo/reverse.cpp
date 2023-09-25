#include <iostream>
using namespace std;
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array before reverse: \n";
    display(arr, n);
    int j = n-1;
    for (int i = 0; i < n / 2; i++)
    {
        swap(&arr[i], &arr[j]);
        j--;
    }
    cout << "array before reverse: \n";
    display(arr, n);

    return 0;
}