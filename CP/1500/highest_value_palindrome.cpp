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
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

string maximumPalinUsingKChanges(string str, int k) 
{ 
    string palin = str; 
  
    // Iinitialize l and r by leftmost and 
    // rightmost ends 
    int l = 0; 
    int r = str.length() - 1; 
  
    //  first try to make string palindrome 
    while (l < r) 
    { 
        // Replace left and right character by 
        // maximum of both 
        if (str[l] != str[r]) 
        { 
            palin[l] = palin[r] = max(str[l], str[r]); 
            k--; 
        } 
        l++; 
        r--; 
    } 
  
    // If k is negative then we can't make 
    // string palindrome 
    if (k < 0) 
        return "-1";
  
    l = 0; 
    r = str.length() - 1; 
  
    while (l <= r) 
    { 
        // At mid character, if K>0 then change 
        // it to 9 
        if (l == r) 
        { 
            if (k > 0) 
                palin[l] = '9'; 
        } 
  
        // If character at lth (same as rth) is 
        // less than 9 
        if (palin[l] < '9') 
        { 
            /* If none of them is changed in the 
               previous loop then subtract 2 from K 
               and convert both to 9 */
            if (k >= 2 && palin[l] == str[l] && 
                palin[r] == str[r]) 
            { 
                k -= 2; 
                palin[l] = palin[r] = '9'; 
            } 
  
            /*  If one of them is changed in the previous 
                loop then subtract 1 from K (1 more is 
                subtracted already) and make them 9  */
            else if (k >= 1 && (palin[l] != str[l] || 
                                palin[r] != str[r])) 
            { 
                k--; 
                palin[l] = palin[r] = '9'; 
            } 
        } 
        l++; 
        r--; 
    } 
  
    return palin; 
} 

int32_t main(){
	NINJA;

	int n,k; cin >> n >> k;
	string s; cin >> s;

	cout << maximumPalinUsingKChanges(s,k) << endl;
	
	return 0;
}