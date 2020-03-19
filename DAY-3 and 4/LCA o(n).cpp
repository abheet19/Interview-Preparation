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
bool findPath(BinaryTreeNode<int>* root,vector<int> &path,int k){
	
	
    if (root == NULL) 
		return false; 
  
    
    path.push_back(root->data); 
  
    
    if (root->data == k) 
        return true; 
  
    
    if ( (root->left && findPath(root->left, path, k)) || (root->right && findPath(root->right, path, k)) ) 
        return true; 
  
    path.pop_back(); 
    return false; 
}

 int findLCA(BinaryTreeNode<int> *root, int n1, int n2) { 
    
    vector<int> path1, path2; 
  
    
    if ( !findPath(root, path1, n1) || !findPath(root, path2, n2)) 
          return -1; 
  
    /* Compare the paths to get the first different value */
    int i; 
    for (i = 0; i < path1.size() && i < path2.size() ; i++) 
        if (path1[i] != path2[i]) 
            break; 
    return path1[i-1]; 
} 


int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << "LCA(4,5) = " << findLCA(root,4,5)<<endl; 
    cout << "nLCA(4,7) = " << findLCA(root,4,7)<<endl; 
    cout << "nLCA(4,6) = " << findLCA(root,4,6)<<endl; 
    cout << "nLCA(2,4) = " << findLCA(root,2,4)<<endl; 
    
}
