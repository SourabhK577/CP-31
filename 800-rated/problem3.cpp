#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    vector<char> arr;
    
    for(int i = 0; i < n; i++){
        char val;
        cin >> val;
        arr.push_back(val);
    }

    
    for(int i = 0; i<n-2 ; i++){
        if(arr[i] == '.' && arr[i+1] == '.' && arr[i+2] == '.'){
            cout<<2<<"\n";
            return ;
        }
    }
    
    int dot_count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == '.'){
            dot_count += 1;
        }
    }
    
    cout<<dot_count<<endl;
    
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin>>t;
	
	while(t--){
	    solve();
	}

}