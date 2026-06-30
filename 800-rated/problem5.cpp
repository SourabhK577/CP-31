#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin>>n;
    
    vector<int> a;
    bool sorted = true;
    
    for(int i = 0; i<n ; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    
    if(a[0] == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
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