#include <iostream>
using namespace std;
void LinearSearch(int n, int *arr, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is present at index " << i << " ." << endl;
            break;
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

    LinearSearch(n, arr, key);
    return 0;
}