// #include<bits/stdc++.h>
// using namespace std;

// #define int long long

// const int mxn = 1e5+10;
// int a[mxn],h[mxn];
// int n,q;
// int ans = 0;

// void print(int x){
// 	cout << x << endl;
// }

// int32_t main(){
// 	cin >> n >> q;
// 	for(int i=1;i<=n;i++) cin >> h[i];
// 	for(int i=1;i<=n;i++) cin >> a[i];

// 	while(q--){
// 		int t,l,r;
// 		cin >> t >> l >> r;
// 		if(t==1) a[l] = r;
// 		else{
// 			ans = a[l] + a[r];
// 			int mn = h[r];
// 			if(r >= l){
// 				for(int i=r-1;i>=l+1;i--){
// 					if(h[i] >= h[l]){
// 						ans = -1;
// 						break;
// 					}
// 					if(h[i] > mn && h[i] < h[l]){
// 						ans += a[i];
// 						mn = h[i];
// 					}
// 				}
// 			}
// 			if(ans == -1){
// 				print(ans);
// 				continue;
// 			}else if(l >r){
// 				for(int i=r+1;i<l;i++){
// 					if(h[i] >= h[l]){
// 						ans = -1;
// 						break;
// 					}
// 					if(h[i] > mn && h[i] < h[l]){
// 						ans += a[i];
// 						mn = h[i];
// 					}
// 				}
// 			}
// 			if(ans==-1){
// 				print(ans);
// 				continue;
// 			}

// 			if(h[r] >= h[l]) ans = -1;
// 			if(r==l) ans = a[r];
// 			print(ans);

// 		}
// 	}
// }	

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define pb push_back
// #define vec vector<int>
// #define maxh priority_queue<int>
// #define minh priority_queue<int,vec,greter<int> >
// #define wer(i,a,b) for(int i=a;i<b;i++)
// #define test int ; cin>>; while(_--)
// #define sortarr sort(arr, arr+n)
// #define mod 1000000007
// #define endl "\n"

// void updateBIT(int arr[], int n, int index, int val) {
//     index++; 
//     while (index <= n) {
//         arr[index] += val; 
//         index += index & (-index); 
//     } 
// } 

// int *buildTree(int n) {
//     int *BITree = new int[n+1]; 
//     for (int i=1; i<=n; i++) 
//         BITree[i] = 0; 
//     return BITree; 
// } 

// int query(int BITree[], int index) {
//     int sum = 0;
//     index++; 
//     while (index>0) {
//         sum += BITree[index]; 
//         index -= index & (-index); 
//     } 
//     return sum; 
// } 

// void change(int *BITree, int l, int r, int n, int val) {
//     updateBIT(BITree,n,l,val);
//     updateBIT(BITree,n,r+1,-val);
// }

// int32_t main(){
// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int n,q; cin>>n>>q;
//     int *bt  = buildTree(n);
//     int *bt1 = buildTree(n);
//     int h[n], arr[n], h1[n], arr1[n];
//     wer(i,0,n) cin>>h[i];
//     wer(i,0,n) cin>>arr[i];
//     wer(i,0,n) h1[i]=h[n-1-i];
//     wer(i,0,n) arr1[i]=arr[n-1-i];
//     int B[n],B1[n];
//     stack<int> s;
//     wer(i,0,n) {
//         while(!s.empty() && h[s.top()] <= h[i]) {
//             B[s.top()] = i-1;
//             s.pop();
//         }
//         s.push(i);
//     }
//     // while(!s.empty()) {
//     //     B[s.top()] = n-1;
//     //     s.pop();
//     // }
//     wer(i,0,n) {
//         while(!s.empty() && h1[s.top()] <= h1[i]) {
//             B1[s.top()] = i-1;
//             s.pop();
//         }
//         s.push(i);
//     }
//     // while(!s.empty()) {
//     //     B1[s.top()] = n-1;
//     //     s.pop();
//     // }
    
//     wer(i,0,n) change(bt,i+1,B[i],n,arr[i]);
//     wer(i,0,n) change(bt1,i+1,B1[i],n,arr1[i]);    
    
//     while(q--) {
//         int x,y,z; cin>>x>>y>>z;
        
//         if(x==2) {
//             if(y<=z) {
//                 if(z-1 > B[y-1]) cout<<-1<<endl;
//                 else             cout<< query(bt,z-1)-query(bt,y-1)+arr[z-1] <<endl; 
//             }
//             else {
//                 if(n-z > B1[n-y]) cout<<-1<<endl;
//                 else              cout<< query(bt1,n-z)-query(bt1,n-y)+arr1[n-z] <<endl; 
//             }
//         }
        
//         else {
//             change(bt,y,B[y-1],n,z-arr[y-1]);
//             arr[y-1]=z;
//             change(bt1,n-y+1,B1[n-y],n,z-arr1[n-y]);
//             arr1[n-y]=z;
//         }
        
//     }   
// }

// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define dloop(i,n) for(int i=n-1;i>=0;i--)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define ld long double
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

struct store {
	int t,l,r;
};

const int mxn = 2e5+10;
int h[mxn],a[mxn];
int hd[mxn],ad[mxn];
int n,m;
int bit1[mxn],bit2[mxn];
stack<int> s;
store st[mxn];

void update(int tree[], int i, int x){
	i++; 
    while (i <= n) {
        tree[i] += x; 
        i += i & (-i); 
    } 
}

int query(int tree[],int i){
	int ans = 0;
    i++; 
    while (i>0) {
        ans += tree[i]; 
        i -= i & (-i); 
    } 
    return ans; 
}

void read(){
	// s.clear();
	cin >> n >> m;
	fo(i,n) cin >> h[i], hd[n-i-1] = h[i];
	fo(i,n) cin >> a[i], ad[n-i-1] = a[i];

	fo(i,m) cin >> st[i].t >> st[i].l >> st[i].r;
}

void print(int x){
	cout << x << endl;
}

void solve(){
	int tree1[mxn],tree2[mxn];
	memset(tree1,0,sizeof(tree1));
	memset(tree2,0,sizeof(tree2));
	fo(i,n){
		while(!s.empty() && h[s.top()] <= h[i]) {
			int tp = s.top();
            bit1[tp] = i-1;
            s.pop();
        }
        s.push(i);
	}
	fo(i,n){
		while(!s.empty() && hd[s.top() <= hd[i]]){
			int tp = s.top();
			bit2[tp] = i-1;
			s.pop();
		}
		s.push(i);
	}

	fo(i,n){
		update(tree1,i+1,a[i]);
		update(tree1,bit1[i]+1,-1*a[i]);
	}

	fo(i,n){
		update(tree2,i+1,ad[i]);
		update(tree2,bit2[i]+1,-1*a[i]);
	}

	fo(i,m){
		int t=st[i].t,l=st[i].l,r=st[i].r;
		// cin >> t >> l >> r;

		if(t==1){
			update(tree1,l,r-a[l-1]);
			update(tree1,bit1[l-1]+1,-1*(r-a[l-1]));
			a[l-1] = r;
			update(tree2,n-l+1,r-ad[n-l]);
			update(tree2,bit2[n-l]+1,-1*(r-ad[n-l]));
			ad[n-l] = r;
		}else{
			if(l<=r) {
                if(r-1 > bit1[l-1]) cout<<-1<<endl;
                else print(query(tree1,r-1)-query(tree1,l-1)+a[r-1]); 
            }
            else {
                if(n-r > bit2[n-l]) cout<<-1<<endl;
                else print(query(tree2,n-r)-query(tree2,n-l)+ad[n-r]); 
            }
		}
	}
}

int32_t main(){
	NINJA;

	read();
	solve();
	
	return 0;
}