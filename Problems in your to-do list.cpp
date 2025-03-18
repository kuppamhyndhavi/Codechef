#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    for(int i=0;i<n;i++){
	        int diff;
	        cin>>diff;
	        if(diff>=1000){
	            ++count;
	        }
	    }
	    cout<<count<<endl;
	    
	  
	}
	return 0;

}
