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

void inOrder(node* node){   //LNR
    // base case 
    if(root == NULL){
        return ;
    }

    inorder(root->left);             
    cout << root -> data << " ";
    inorder(root -> right);

}

void preOrder(node* root){  //NLR
    // base case 
    if(root == NULL)
    return ;

    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);

}

void postOrder(node* root){  //LRN
    // base case 
    if( root == NULL)
    return ;


    postOrder(root->left);
    postOrder(root->right);
    cout<< root -> data << " ";
}


void buildFromLevelOrder(node* &root){
    queue <node*> q;
    cout<<"Emter data for root " << endl;
    int data;
    cin>> data;

    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: "<< temp -> data <<endl;
        int leftData;
        cin >> leftData;
        if(leftData !=-1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }
        
        cout << "Enter right node for: "<< temp -> data <<endl;
        int rightData;
        cin >> rightData;
        if(rightData !=-1){
            temp -> left = new node(rightData);
            q.push(temp -> right);
        }
    }
}




int main(){

    node* root = NULL;

    // creating a tree 
    root = buildTree(root);

}