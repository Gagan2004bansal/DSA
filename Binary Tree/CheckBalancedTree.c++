#include<iostream> 
#include<queue>
using namespace std;
class node{
    public: 
    int data ;
    node* left;
    node* right;

    // Creating Constructor
    node(int data){
        this -> data =  data ;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* BuildTree(node* root){
    int data;
    cout << "Enter Data for Root : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    
    root = new node(data);
}
int main(){
    node* root = NULL;

    // Creating of a Tree
    root = BuildTree(root);
    return 0;
}