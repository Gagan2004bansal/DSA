// #include<iostream>
// #include<queue>
// using namespace std;
// class node{
//     public:
//         int data;
//         node* left;
//         node* right;

//         node(int d){
//             this -> data = d;
//             this -> left = NULL;
//             this -> right = NULL;
//         }
// };
// node *buildTree(node* root){
//     cout << "Enter the data for node : "<<endl;
//     int data;
//     cin>>data;
//     root = new node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Entering the data for inserting in left : ";
//     root -> left = buildTree(root->left);
//     cout << "Entering the data for inserting in right : ";
//     root -> right = buildTree(root->right);
//     return root;
// }
// void levelOrderTransversal(node* root){
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node* temp = q.front();
//         q.pop();

//         if(temp == NULL){
//             cout << endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout << temp -> data << " ";
//             if (temp -> left)
//             {   
//                 q.push(temp -> left);
//             }
//             if(temp -> right)
//             { 
//                 q.push(temp -> right);
//             }
//         }
//     }
    
    
// }
// int main(){
//     node* root = NULL;
//     // creating a tree
//     root = buildTree(root);

//     // level ordering transversal of a tree 
//     cout<<"Printing of tree"<<endl;
//     levelOrderTransversal(root);
//     return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;

// class node {
//     public:
//         int data;
//         node* left;
//         node* right;

//     node(int d) {
//         this -> data = d;
//         this -> left = NULL;
//         this -> right = NULL;
//     }
// };
//   // This method use recursion for making Binary tree
// node* buildTree(node* root) {

//     cout << "Enter the data: " << endl;
//     int data;
//     cin >> data;
//     root = new node(data);    

//     if(data == -1) {
//         return NULL;
//     }

//     cout << "Enter data for inserting in left of " << data << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right of " << data << endl;
//     root->right = buildTree(root->right);
//     return root;

// }

// void levelOrderTraversal(node* root) {
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()) {
//         node* temp = q.front();
//         q.pop();

//         if(temp == NULL) { 
//             //purana level complete traverse ho chuka hai
//             cout << endl;
//             if(!q.empty()) { 
//                 //queue still has some child ndoes
//                 q.push(NULL);
//             }  
//         }
//         else{
//             cout << temp -> data << " ";
//             if(temp ->left) {
//                 q.push(temp ->left);
//             }

//             if(temp ->right) {
//                 q.push(temp ->right);
//             }
//         }
//     }

// }

// void inorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     inorder(root->left);
//     cout << root-> data << " ";
//     inorder(root->right);

// }

// void preorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     cout << root-> data << " ";
//     preorder(root->left);
//     preorder(root->right);

// }

// void postorder(node* root) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     postorder(root->left);
//     postorder(root->right);
//     cout << root-> data << " ";

// }

// void buildFromLevelOrder(node* &root) {
//     queue<node*> q;

//     cout << "Enter data for root" << endl;
//     int data ;
//     cin >> data;
//     root = new node(data);
    
//     q.push(root);

//     while(!q.empty()) {
//         node* temp = q.front();
//         q.pop();

//         cout << "Enter left node for: " << temp->data << endl;
//         int leftData;
//         cin >> leftData;

//         if(leftData != -1) {
//             temp -> left = new node(leftData);
//             q.push(temp->left);
//         }

//         cout << "Enter right node for: " << temp->data << endl;
//         int rightData;
//         cin >> rightData;

//         if(rightData != -1) {
//             temp -> right = new node(rightData);
//             q.push(temp->right);
//         }
//     }
//  }


//int main() {

    //node* root = NULL;

    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    
    //creating a Tree
    //root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    //cout << "Printing the level order tracersal output " << endl;
    //levelOrderTraversal(root);
    /*
    cout << "inorder traversal is:  ";
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root); 
    */


//     return 0;
// }

#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;  

        node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};
node* buildTree(node* root){
    int data;
    cout << "Enter the data : ";
    cin>>data;

    root = new node(data);
    
    if(data == -1){
        return NULL;
    }

    cout << "Entering the data in left of Node : "<<data<<endl;
    root -> left = buildTree(root->left);
    cout << "Entering the data in right of Node : "<<data<<endl;
    root -> right = buildTree(root->right);

    return root;
}
void levelOrderTrasversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}
void inOrderTrasversal(node* root){
    // Base Case 
    if(root == NULL){
        return ;
    }
    inOrderTrasversal(root -> left);
    cout << root -> data << " ";
    inOrderTrasversal(root -> right);
}
void preOrderTrasversal(node* root){
    // Base Case
    if (root == NULL)
    {
        return;
    }
    cout << root -> data << " ";
    preOrderTrasversal(root -> left);
    preOrderTrasversal(root -> right);
}
void postOrderTrasversal(node* root){
    //Base Case 
    if (root == NULL)
    {
        return ;
    }
    postOrderTrasversal(root -> left);
    postOrderTrasversal(root -> right);
    cout << root -> data << " ";
}
void buildfromleveltrasversal(node* &root){
    queue<node*> q;
    cout << "Enter the data for root : ";
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        
        // taking data for left node
        int leftdata;
        cout<<"Enter data for "<<temp->data<<" left node ";
        cin>>leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        
        int rightdata;
        cout<<"Enter data for "<<temp->data<<" right node ";
        cin>>rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);   
            q.push(temp->right);
        }
        
    }
    
}
int main(){
    node* root = NULL;

    // buildTree Calling for making binary tree
    //root = buildTree(root);
    // levelOrdertransversal for printing of binary tree 
    //levelOrderTrasversal(root);
    //inOrderTrasversal(root);
    //preOrderTrasversal(root);
    //postOrderTrasversal(root);
    buildfromleveltrasversal(root);
    levelOrderTrasversal(root);
    return 0;
}