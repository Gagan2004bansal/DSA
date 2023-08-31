// Here we find sum of all elements present in an array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,-1,5,-6};
    int size = sizeof(arr)/sizeof(int);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is " << sum << endl;
    return 0;
}