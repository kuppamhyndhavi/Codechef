#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int n[3]={a,b,c};
	    sort(n,n+3);
	    cout<<n[1]<<endl;
	}

}
