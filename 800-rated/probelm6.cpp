#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    
    vector<int> a;
    
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    
    unordered_map<int, int> frqmap;
    
    for(int num : a){
        frqmap[num] += 1;
    }
    
    if(frqmap.size() == 2){
        int firstfrq = frqmap.begin()->second;
        
        if(firstfrq == (n+1)/2 || firstfrq == n/2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(frqmap.size() == 1){
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