#include<iostream>
#include<queue>
#include<stack>
using namespace std;
 
struct Node{
    int data; //data jo hame assign karna hai node mai
    struct Node*left;//left wala ptr
    struct Node*right;//right wala pointer
    Node(int val){ //agar hame koi nayi node add karni hogi to uske lie ek constructor type cheez
        data=val;
        left=right=NULL;//initiallly dono pointer null hi honge
    }
};

void preorder(struct Node* node) {
    if (node == NULL)
        return;

    cout << node->data << " "; // print(node->data)
    preorder(node->left);      // preorder(node->left)//recursive call
    preorder(node->right);     // preorder(node->right)
}

void inorder(struct Node* node){    
    if(node==NULL){
        return;
    }
    inorder(node->left);
    cout << node->data<<" ";
    inorder(node->right);
}

void postorder(struct Node* node){
    if(node==NULL){
        return;
    }

    postorder(node->left);
    postorder(node->right);
    cout << node->data;
}

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel;

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front();
            q.pop();

            currentLevel.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        result.push_back(currentLevel);
    }

    return result;
}

vector<vector<int>>preordertraversal(TreeNode* root){
    vector<int>preorder;
    if(root=NULL){
        return root;
    }
    stack<TreeNode*>st;

    while(!st.empty()){
        root=st.top();
        st.pop();
        preorder.push_back(root->val);

        if(root->left !=NULL){
            st.push(root->left);
        }

        if(root->right !=NULL){
            st.push(root->right);
        }
    }
    return preorder;
}

vector<int>inordertraversal(TreeNode* root){
    stack<TreeNode*>st;//stack initialize krlo ek
    TreeNode* node=root;//ek nayi node lelo
    vector<int>inorder;//ek vector data structure lelo inorder naam ka jisme answer store karaoge

    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;
        }

        else{
            if(st.empty()==true){
                break;
            }
            node=st.top();
            st.pop();
            inorder.push_back(node->val);

            node=node->right;
        }
    }
    return inorder;
}



int main(){
    struct Node*root=new Node(1);//ek root naam ki node jahase tree initiate hogi
    root->left=new Node(2);//root ka left
    root->right=new Node(3);//root ka right

    root->left->right=new Node(5);//root ke left ka right

    //   1
    //  / \
    // 2   3
    //  \
    //   5



    return 0;
}