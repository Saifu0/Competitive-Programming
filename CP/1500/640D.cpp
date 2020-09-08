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

int32_t main(){
    NINJA;

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        fo(i,n) cin >> a[i];

        int l=0,r=n-1;
        int aa = 0, bb=0;
        int turn=0;
        int suma=0,sumb=0;
        int cnt = 0;
        while(l<=r){
            while(aa <= bb && l<=r && !turn){
                aa += a[l];
                l++;
            }
            while(bb<=aa && l<=r && turn){
                bb += a[r];
                r--;
            }
            if(!turn){
                bb=0;
                turn = 1;
                suma += aa;
            }else{
                turn =0;
                sumb += bb;
                aa = 0;
            }
            cnt++;
        }
        cout << cnt << " " << suma << " " << sumb << endl;
    }
    
    return 0;
}