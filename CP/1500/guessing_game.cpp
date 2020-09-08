// // ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

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

// int32_t main(){
// 	NINJA;
// 	char s;
// 	int n; cin>>n;
//     int start = 1;
//     int end = n;
//     int k = 1;
//     int lie = 0;
//     while(start<=end && k<=300)
//     { 
//         int mid = (start+end)/2;
//         if(lie)
//         {
//             cout<<mid<<endl;
//             cout.flush();
//             cin>>s;
//             if(s=='E') break;
//             if(s=='L') end = mid-1;
//             if(s=='G') start = mid+1;
//             lie = 0;
//         }else{
//              cout<<end<<endl;
//              cout.flush();
//              cin>>s;
//              if(s=='E') break;
//              if(s=='L') end -= 1;
//              if(s=='G') end--;
//              lie = 1;
//         }
//     }
    
// 	return 0;
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

    int n; cin >> n;
    string s; 

    int lie = 0;
    int k =1 ;
    for(int i=0;i<300;i++){
            int have = rand()%((n+1-k) + k);
            cout << have << endl;
            cout.flush();
            cin >> s;
            if(s=="E") break;
            cout << have << endl;
            cout.flush();
            string s1; cin >> s1;
            if(s1=="E") break;
            if(s!=s1){
                continue;
            }
            if(s=="L"){
                n = have -1;
            }else{
                k = have+1;
                
            }
    }
    
    return 0;
}