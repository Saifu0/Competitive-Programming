#include <bits/stdc++.h> 
using namespace std; 
  
bool printOccurrences(string txt, string pat) 
{ 
    int found = txt.find(pat); 
    while (found != string::npos) { 
        return true;
    } 
    return false;
} 
  
int main() 
{ 
    string txt,pat; cin >> pat >> txt;
    if(printOccurrences(txt, pat)) cout << "YES" << endl;
    else cout << "NO" << endl; 
    return 0; 
} 