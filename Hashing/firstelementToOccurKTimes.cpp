#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t-->0){
	    int n,k;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }
	    bool printed = false;
	    for(int i=0;i<n;i++){
	        if(m[a[i]]==k){
	            cout << a[i] << endl;
	            printed = true;
	            break;
	        }
	    }
	    if(!printed){
	        cout << -1 <<  endl;
	    }
	}
	return 0;
}
