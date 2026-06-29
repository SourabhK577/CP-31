// Halloumi Boxes

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    
    vector<int> arr(n);
    for(int i = 0; i<n ; i++) {
        cin>>arr[i];
    }
    
    if(k>1){
        cout<<"YES"<<endl;
    }
    else{
        bool yes = true;
        for(int i = 0; i<n-1;i++){
            if(arr[i] > arr[i+1]){
                yes = false;
                break;
            }
        }
        
        if(yes){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}

}