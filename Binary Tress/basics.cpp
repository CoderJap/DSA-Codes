#include <iostream>
#include <queue>
using namespace std;

class node {
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
    cout << "Enter the data: "<<endl;
    int data;
    cin>>data;
    
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<< "Enter data for inserting in right of "<<data<<endl;
    root -> right = buildTree(root->right);

    return root;
}

// Traversals 

void levelOrderTraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // purana level complete traverse h chuka hai 
            cout << endl;
            if(!q.empty()){
                // q still has some child nodes 
                q.push(NULL);
            }
        }
        else {
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp->left);
            }

            if(temp -> right){
                q.push(temp -> left);
            }
        }
    }
}

int main(){

    node* root = NULL;

    // creating a tree 
     // root = buildTree(root);
  

    // Level Order traversal 
     levelOrderTraversal(root);


}