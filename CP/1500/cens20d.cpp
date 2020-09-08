#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define vi vector<int>
#define int long long

int32_t main(){

  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int *a=new int[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
    int cnt=0;
    fo(i,n){
    Fo(j,i+1,n){
        if(a[i]==(a[i]&a[j]))cnt++;
    }

     }
     cout<<cnt << endl;

  }
return 0;
}