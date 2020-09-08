#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 1e5+500;


int merge(int a[], int temp[],int l, int mid, int r){
	int cnt = 0;
	int i ,j,k;
	i = l;
	j = mid;
	k = l;
	
	while((i<=mid-1 )&& (j<=r)){
		if(a[i]<=a[j]) temp[k++] = a[i++];
		else{
			temp[k++] = a[j++];
			cnt += mid-i;
		}
	}
	
	while(i<=mid-1) temp[k++] = a[i++];
	while(j<=r) temp[k++] = a[j++];
	
	for(i=l;i<=r;i++){
		a[i] = temp[i];
	}
	return cnt;
}

int merge_sort(int a[],int temp[],int l, int r){
	int ans = 0;
	while(l<r){
		int mid = (l+r)/2;
		ans += merge_sort(a,temp,l,mid);
		ans += merge_sort(a,temp,mid+1,r);
		ans += merge(a,temp,l,mid+1,r);
	}
	return ans;
}

int32_t main(){
	NINJA;

		
	int n; cin >> n;
	int a[n];
	int temp[n];

	
	fo(i,n) cin >> a[i];


	
	cout << "yes1" << endl;
	
	cout << merge_sort(a,temp,0,n-1) << endl;

	return 0;
}

