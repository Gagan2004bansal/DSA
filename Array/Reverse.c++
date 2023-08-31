// Here we Reverse the array using swap method
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    int mid = size / 2;
    for (int i = 0; i < mid; i++)
    {
        swap(arr[i],arr[size-i-1]);
    }
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}