#include <iostream>
#include <queue>
#include <vector>
using namespace std;
template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
BinaryTreeNode<int>* takeInput() {
    int rootData;
    cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
BinaryTreeNode<int>* findLCA(BinaryTreeNode<int>* root,int n1,int n2){
	if(root==NULL){
		return NULL;
	}
	if(root->data==n1||root->data==n2){
		return root;
	}
	BinaryTreeNode<int>* left_lca=findLCA(root->left,n1,n2);
	BinaryTreeNode<int>* right_lca=findLCA(root->right,n1,n2);
	
	if(left_lca &&right_lca){
		return root;
	}
	if(left_lca==NULL){
		return right_lca;
	}
	else{
		return left_lca;
	}
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << "LCA(4,5) = " << findLCA(root,4,5)->data<<endl; 
    cout << "nLCA(4,7) = " << findLCA(root,4,7)->data<<endl; 
    cout << "nLCA(4,6) = " << findLCA(root,4,6)->data<<endl; 
    cout << "nLCA(2,4) = " << findLCA(root,2,4)->data<<endl; 
    
}
