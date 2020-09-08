//              +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+              \\

#include <bits/stdc++.h>

#define int ll

#define F first
#define S second
#define _sz(x) (int)x.size()

using namespace std ;
using ll = long long ;
using ld = long double ;
using pii = pair <int , int> ;

const int N = 2000 + 20 ;
int n ;
vector <int> vec[2] ;

int32_t main(){
	ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) ;

	cin >> n ;

	for (int i = 0 , x ; i < n ; i ++) {
		cin >> x ;

		vec[x & 1].push_back(x) ;
	}

	for (int i : {0 , 1}) sort(vec[i].begin() , vec[i].end()) ;

	int ans = 0 ;

	for (int i = 0 ; i < _sz(vec[0]) - _sz(vec[1]) - 1 ; i ++) ans += vec[0][i] ;
	for (int i = 0 ; i < _sz(vec[1]) - _sz(vec[0]) - 1 ; i ++) ans += vec[1][i] ;

	cout << ans << '\n' ;
}
