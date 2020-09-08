#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
}

int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 

int main(){
	c_p_c();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		stack<char> st;
		st.push('$');

		string ans = "";
		fo(i,n){
			if(s[i]>='A' && s[i]<='Z') ans += s[i];
			else if(s[i]=='(') st.push(s[i]);
			else if(s[i]==')'){
				while(st.top()!='$' && st.top()!='('){
					char c = st.top();
					ans += c;
					st.pop();
				}
				if(st.top()=='('){
					st.pop();
				}
			}else{
				while(st.top()!='$' && prec(s[i])<=prec(st.top())){
					char c = st.top();
					ans += c;
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(st.top()!='$'){
			char c = st.top();
			ans += c;
			st.pop();
		}
		cout << ans << endl;
	}

	return 0;
}