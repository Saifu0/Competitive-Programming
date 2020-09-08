#include<bits/stdc++.h>
using namespace std;

class node {
	public:
		int data;
		node*left,*right;
	
		node(){
			data = 0;
			left = NULL;
			right = NULL;
		}

		node(int d){
			data = d;
			left=NULL;
			right=NULL;
		}

		node* Insert(node*root,int data){
			if(root==NULL){
				return new node(data);
			}
			if(data > root->data){
				root->right = Insert(root->right,data);
			}else{
				root->left =  Insert(root->left,data);
			}
			return root;
		}

		void search(node*root,int data){
			if(root==NULL){
				cout << "Key not present\n";
				return;
			}
			if(root->data  == data){
				cout << "Command successful!\n";
				return;
			}

			if(data > root->data) search(root->right,data);
			else search(root->left,data);
		}

		node* minInRight(node*temp){
			node*cur = temp;

			while(cur and cur->left != NULL) cur = cur->left;

			return cur;
		}

		node* Delete(node*root,int data){
			if(root==NULL) return root;

			if(data > root->data) root->right = Delete(root->right,data);
			else if(data < root->data) root->left = Delete(root->left,data);
			else{
				if(root->left == NULL){
					node*temp = root->right;
					free(root);
					return temp;
				}else if(root->right ==NULL){
					node*temp = root->left;
					free(root);
					return temp;
				}

				node*temp = minInRight(root->right);
				root->data = temp->data;

				root->right = Delete(root->right,temp->data);
			}
			return root;
		}

		void inorder(node*root){
			if(root==NULL){
				return;
			}
			inorder(root->left);
			cout << root->data << " ";
			inorder(root->right);
		}
};


int main(){
	node b,*tree = NULL;
	tree = b.Insert(tree,5);
	b.Insert(tree,4);
	b.Insert(tree,10);
	b.Insert(tree,1);

	b.inorder(tree);
	cout << endl;

	b.search(tree,2);
	b.search(tree,10);

	b.Delete(tree,4);
	
	b.Delete(tree,1);

	b.inorder(tree);

	cout << endl;

	b.search(tree,4);

	return 0;
}

