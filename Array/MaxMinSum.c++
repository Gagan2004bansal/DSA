// Here we find MAX element and MIN element in an Array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int Max =  arr[0];
    int Min = arr[0];
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > Max){
            Max = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < Min){
            Min = arr[i];
        }
    }
    cout << "Max : " << Max << endl;
    cout << "Min : " << Min << endl;
    return 0;
}