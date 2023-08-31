// Here we remove all duplicate elements in an array without sort the array
// It can be done only using Hash map only if we have a Unsorted array with C++ STL 
#include<iostream>
#include<unordered_map>
using namespace std;
void removeDups(int arr[], int n)
{
    // Hash map which will store the
    // elements which has appeared previously.
    unordered_map<int, bool> mp;
 
    for (int i = 0; i < n; ++i) {
 
        // Print the element if it is not
        // there in the hash map
        if (mp.find(arr[i]) == mp.end()) {
            cout << arr[i] << " ";
        }
 
        // Insert the element in the hash map
        mp[arr[i]] = true;
    }
}
int main(){
    int arr[] = {5,8,2,3,3,3,2,1};
    int Size = sizeof(arr)/sizeof(int);
    removeDups(arr,Size);
    return 0;
}