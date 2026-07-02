#include <bits/stdc++.h>
using namespace std;

bool check(string x, string s){
    
    if(s.size() > x.size()){
        return false;
    }
    else{
        for(int i = 0; i < x.size() - s.size()+1; i++){
            if(x.substr(i,size(s)) == s){
                return true;
            }
        }
    
    return false;
    }
}

void solve() {
    
    int n,m;
    cin>>n>>m;
    
    string x,s;
    cin>>x;
    cin>>s;
    
    int ans = -1;
    
    for(int i = 0; i <= 5; i++){
        if(check(x,s)){
            ans = i;
            break;
        }
        else{
            x += x;
        }
    }
    
    cout<<ans<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}