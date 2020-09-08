// #include<bits/stdc++.h>
// using namespace std;

// #define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define fo(i,n) for(int i=0;i<n;i++)
// #define Fo(i,k,n) for(int i=k;i<n;i++)
// #define for1(i,n) for(int i=1;i<=n;i++)
// #define dloop(i,n) for(int i=n-1;i>=0;i--)
// #define iii tuple<int,int,int>
// #define vi vector<int>
// #define ii pair<int,int>
// #define vii vector<ii>
// #define int long long
// #define pb push_back
// #define endl "\n"
// #define setbits __builtin_popcountll
// #define mp map<int,int>
// #define F first
// #define S second
// #define sz(v) (int)v.size()
// #define mod 1000000007
// #define inf (int)1e18

// int ar[3],br[3];

// int solve(){
// 	int ans = inf;
// 	int dif = 0;
// 	fo(i,3){
// 		if(ar[i]-br[i]==0) dif++;
// 	}
// 	int a=ar[0],b =ar[1], c=ar[2];
// 	int p=br[0],q=br[1],r=br[2];

// 	if(a!=b){
// 		if((p-q)%(a-b)==0 && (q*a-p*b)%(a-b)==0){
// 			int x = (p-q)/(a-b);
// 			int y = (q*a-p*b)/(a-b);
// 			if(c*x+y==r) ans = min(ans,2ll);
// 		}
// 	}

// 	if(dif==3) return 0;
// 	else if(dif==2) return 1;
// 	else if(dif==1){
// 		set<int> s;
// 		fo(i,3){
// 			if((ar[i]-br[i])!=0) s.insert(ar[i]-br[i]);
// 		}
// 		if(sz(s)==1) ans = min(ans,1ll);
// 		else ans = min(ans,2ll);
// 		s.clear();
// 		int cnt=0;
// 		fo(i,3){
// 			if(ar[i]!=br[i] && br[i]!=0 && ar[i]%br[i]==0){
// 				int x = ar[i]/br[i];
// 				s.insert(x);
// 				cnt++;
// 			}
// 		}
// 		if(cnt==1) ans = min(ans,2ll);
// 		else if(cnt==2 && sz(s)==1) ans = min(ans,1ll);
// 		else if(cnt==2 && sz(s)==2) ans = min(ans,2ll);
// 		else ans = min(ans,2ll);
// 	}else{
// 		set<int> s;
// 		fo(i,3){
// 			if((ar[i]-br[i])!=0) s.insert(ar[i]-br[i]);
// 		}
// 		ans = min(ans,(int)sz(s));
// 		s.clear();
// 		int cnt=0;
// 		fo(i,3){
// 			if(ar[i]!=br[i] && br[i]!=0 && ar[i]%br[i]==0){
// 				int x = ar[i]/br[i];
// 				s.insert(x);
// 				cnt++;
// 			}
// 		}
// 		if(cnt==3) ans=min(ans,sz(s));
// 		else if(cnt==2){
// 			if(sz(s)==1) ans = min(ans,2ll);
// 			else ans = min(ans,3ll);
// 		}
// 		fo(i,3){
// 			fo(j,3){
// 				int k;
// 				if(i==j) continue;
// 				if((i==1 && j==2) || (i==2 && j==1)) k=0;
// 				else if((!i && j==1) || (i==1 && !j)) k=2;
// 				else k=1;
// 				int rem = br[i]/ar[i];
// 				int known = br[i] - ar[i];
// 				int need1 = ar[j] + known;
// 				int need2 = ar[k] + known;
// 				if(ar[j]&&ar[k]){
// 					if(((br[j]-known)%ar[j]==0 && (br[k]-known)%ar[k]==0) && (br[j]-known)/ar[j] == (br[k]-known)/ar[k])
// 						ans = min(ans,2ll);
// 				}
// 				if(need1&&need2){
// 					if((br[j]%need1==0 && (br[k]%need2==0)) && (br[j]/need1==br[k]/need2))
// 						ans = min(ans,2ll);
// 				}
// 				if(ar[i] && br[i]%ar[i]==0){
// 					if((br[j]-rem*ar[j])==(br[k]-rem*ar[k])) ans = min(ans,2ll);
// 					if(rem && br[j]%rem==0 && br[k]%rem==0){
// 						int rem1 = br[j]/rem;
// 						int rem2 = br[k]/rem;
// 						if((rem1-ar[j])==(rem2-ar[k])) ans = min(ans,2ll);
// 					}
// 				}
// 				if(ar[i] && br[i]%ar[i]==0){
// 					int rem3 = br[i]/ar[i];
// 					if((rem3*ar[j] && ar[k]) && (br[j]%(rem3*ar[j])==0 && br[k]%ar[k]==0)){
// 						if(br[j]/(rem3*ar[j]) == br[k]/ar[k]) ans = min(ans,2ll);
// 					}
// 					if((br[j]-rem3*ar[j])==(br[k]-ar[k])) ans = min(ans,2ll);
// 				}
// 				if(need1 && need2 && br[j]%need1==0 && br[k]%need2){
// 					if(br[j]/need1==br[k]/need2) ans = min(ans,2ll);;
// 				}
// 				if(ar[j]&&ar[k]&&(br[j]-known)%ar[j]==0 && (br[k]-known)%ar[k]==0){
// 					if((br[j]-known)/ar[j]==(br[k]-known)/ar[k]) ans = min(ans,2ll);
// 				}
// 				if((br[j]-ar[j]-known)==(br[k]-ar[k])) ans = min(ans,2ll);
// 				if((ar[j]+known) && (ar[k])){
// 					if((br[j]%(ar[j]+known))==0 && (br[k]%ar[k])==0 && br[j]/(ar[j]+known) == br[k]/ar[k])
// 						ans = min(ans,2ll);
// 				}
// 			}
// 		}
// 	}
// 	ans = min(ans,3ll);
// 	return ans;
// }

// int32_t main(){
// 	NINJA;

// 	int _; cin >> _;
// 	while(_--){
// 		fo(i,3) cin >> ar[i];
// 		fo(i,3) cin >> br[i];

// 		cout << solve() << endl;
// 	}
	
// 	return 0;
// }

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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

int ar[3],br[3];

int solve(){
// 	int ans = inf;
    vi ans;
	int dif = 0;
	fo(i,3){
		if(ar[i]-br[i]==0) dif++;
	}
	int a=ar[0],b =ar[1], c=ar[2];
	int p=br[0],q=br[1],r=br[2];

	if(a!=b){
		if((p-q)%(a-b)==0 && (q*a-p*b)%(a-b)==0){
			int x = (p-q)/(a-b);
			int y = (q*a-p*b)/(a-b);
			if((c*x+y)==r) ans.pb(2ll);
		}
	}
	ans.pb(3ll);
	if(dif==3) ans.pb(0ll);
	else if(dif==2) ans.pb(1ll);
	else if(dif==1){
		set<int> s;
		fo(i,3){
			if((br[i]-ar[i])!=0) s.insert(br[i]-ar[i]);
		}
		if(sz(s)==1) ans.pb(1ll);
		else ans.pb(2ll);
		s ={};
		int cnt=0;
		fo(i,3){
			if(ar[i]!=br[i] && ar[i]!=0 && br[i]%ar[i]==0){
				int x = br[i]/ar[i];
				s.insert(x);
				cnt++;
			}
		}
		if(cnt==1) ans.pb(2ll);
		else if(cnt==2 && sz(s)==1) ans.pb(1ll);
		else if(cnt==2 && sz(s)==2) ans.pb(2ll);
		else ans.pb(2ll);
	}else{
		set<int> s;
		fo(i,3){
			if((br[i]-ar[i])!=0) s.insert(br[i]-ar[i]);
		}
		ans.pb(sz(s));
		s = {};
		int cnt=0;
		fo(i,3){
			if(ar[i]!=br[i] && ar[i]!=0 && br[i]%ar[i]==0){
				int x = br[i]/ar[i];
				s.insert(x);
				cnt++;
			}
		}
		if(cnt==3) ans.pb(sz(s));
		else if(cnt==2){
			if(sz(s)==1) ans.pb(2ll);
			else ans.pb(3ll);
		}
		fo(i,3){
			fo(j,3){
				int k;
				if(i==j) continue;
				if((i==1 && j==2) || (i==2 && j==1)) k=0;
				else if((!i && j==1) || (i==1 && !j)) k=2;
				else k=1;
				int rem = br[i]/ar[i];
				int known = br[i] - ar[i];
				int need1 = ar[j] + known;
				int need2 = ar[k] + known;
				if(ar[j]&&ar[k]){
					if(((br[j]-known)%ar[j]==0 && (br[k]-known)%ar[k]==0))
						if((br[j]-known)/ar[j] == (br[k]-known)/ar[k])
							ans.pb(2ll);
				}
				if(need1&&need2){
					if((br[j]%need1==0 && (br[k]%need2==0)))
						if((br[j]/need1==br[k]/need2))
							ans.pb(2ll);
				}
				if(ar[i] && br[i]%ar[i]==0){
					if((br[j]-rem*ar[j])==(br[k]-rem*ar[k])) ans.pb(2ll);
					if(rem && br[j]%rem==0 && br[k]%rem==0){
						int rem1 = br[j]/rem;
						int rem2 = br[k]/rem;
						if((rem1-ar[j])==(rem2-ar[k])) ans.pb(2ll);
					}
				}
				if(ar[i] && br[i]%ar[i]==0){
					int rem3 = br[i]/ar[i];
					if((rem3*ar[j] && ar[k]) && (br[j]%(rem3*ar[j])==0 && br[k]%ar[k]==0)){
						if(br[j]/(rem3*ar[j]) == br[k]/ar[k]) ans.pb(2ll);
					}
					if((br[j]-rem3*ar[j])==(br[k]-ar[k])) ans.pb(2ll);
				}
				if(need1 && need2 && br[j]%need1==0 && br[k]%need2){
					if(br[j]/need1==br[k]/need2) ans.pb(2ll);
				}
				if(ar[j]&&ar[k]&&(br[j]-known)%ar[j]==0 && (br[k]-known)%ar[k]==0){
					if((br[j]-known)/ar[j]==(br[k]-known)/ar[k]) ans.pb(2ll);
				}
				if((br[j]-ar[j]-known)==(br[k]-ar[k])) ans.pb(2ll);
				if((ar[j]+known) && (ar[k])){
					if((br[j]%(ar[j]+known))==0 && (br[k]%ar[k])==0 && br[j]/(ar[j]+known) == br[k]/ar[k])
						ans.pb(2ll);
				}
			}
		}
	}
	
	sort(ans.begin(),ans.end());
	return ans[0];
}

int32_t main(){
	NINJA;

	int _; cin >> _;
	while(_--){
		fo(i,3) cin >> ar[i];
		fo(i,3) cin >> br[i];

		cout << solve() << endl;
	}
	
	return 0;
}