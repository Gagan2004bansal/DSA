#include <iostream>
using namespace std;
void BinarySearch(int e, int *arr, int key)
{
    int s = 0;
    int mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            cout << arr[mid] << " is present at index " << mid << " ." << endl;
            break;
        }
        else if (arr[mid] > key)
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key you want to search : ";
    cin >> key;

    BinarySearch(n, arr, key);
    return 0;
}