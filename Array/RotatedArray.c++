// Rotated Array 
#include<iostream>
using namespace std;
void rotate(int *arr,int k, int size){
    int p = 1;
    while (p <= k)
    {
        int last = arr[0];
        for (int i = 0; i < size-1 ; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[size - 1] = last;
        p++;
    }
}
int main(){
    int arr[] = {6,7,1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int k;
    cout << "Enter how many element you want to rotated" << endl;
    cin >> k;
    rotate(arr,k,size);
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}