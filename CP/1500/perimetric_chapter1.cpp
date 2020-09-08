#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int32_t main() {
	int t; cin>>t;
	while(t--) {
	    int n,k,w; cin>>n>>k>>w;
	    int L[n+1], H[n+1];
	    for(int i=1;i<=k;i++) cin>>L[i];
	    int A,B,C,D; cin>>A>>B>>C>>D;
	    for(int i=1;i<=k;i++) cin>>H[i];
	    int W,X,Y,Z; cin>>W>>X>>Y>>Z;
	    for(int i=k+1;i<=n;i++) L[i]=(A*L[i-2]%D+B*L[i-1]%D+C%D)%D +1;
	    for(int i=k+1;i<=n;i++) H[i]=(W*H[i-2]%Z+X*H[i-1]%Z+Y%Z)%Z +1;

	   	for(int i=1;i<=n;i++){
	   		cout << L[i] << " ";
	   	}

	    int old=2*(w+H[1])%mod;
	    int ans = old;
	    int b = (L[1]+w);
	    int mb = b-w;
	    int h = H[1];
	    int index[n+1] = {0};
	    int id = 0;
	    bool ok = 0;
	    for(int i=2;i<=n;i++) {
	    	int temp = 0;
	       if(L[i]>b){
	       	temp += old;
	       	temp += 2*(w+H[i]);
	       	mb = L[i];
	       	h = H[i];
	       	id = 0;
	       	ok = 0;
	       }else{
	       	if(ok==0){
	       		ok = 1;
	       		id = i;
	       	}
	       	mb = min(L[i],mb);
	       	h = max(H[i],h);
	       	temp = 2*((L[i]+w-mb)+h);
	       	temp += index[id-1];
	       }
	       index[i] = old;
	       b = L[i]+w;
	       old = temp;
	       // cout << old << " ";
	       ans = (ans*old)%mod;
	    }
	    cout<<ans%mod<<endl;
	}
}