#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

struct node {
	int data;
	node *left ,*right; 
};

struct node* Insert(node*tree, int data){
	if(tree==NULL){
		node* newNode = (struct node*)malloc(sizeof(struct node));
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->data = data;
		return newNode;
	}

	if(data > tree->data) tree->right = Insert(tree->right,data);
	else tree->left = Insert(tree->left,data);

	return tree;
}

void print(node* tree){
	if(tree!=NULL){
		print(tree->left);
		cout << tree->data << " ";
		print(tree->right);
	}
}

int find_height(node*tree){
	int ans1 = 0, ans2 = 0;
	if(tree->left!=NULL) ans1 += find_height(tree->left) + 1;
	if(tree->right!=NULL) ans2 += find_height(tree->right) +1 ;

	return max(ans1,ans2);
}
	


int32_t main(){
	NINJA;
	struct node *tree = NULL;
	int n; cin >> n;

	fo(i,n){
		int x; cin >> x;
		tree = Insert(tree,x);
	}
	// print(tree);
	cout << find_height(tree)+1 << endl;

	
	return 0;
}