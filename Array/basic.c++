// Insertion - Updation - Printing 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of Array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    arr[2] = 10;
    cout << "After Updation" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
