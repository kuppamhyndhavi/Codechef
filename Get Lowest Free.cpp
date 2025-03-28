#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int t=a+b+c;
	    int mini=min({a,b,c});
	    cout<<t-mini<<endl;
	}

}
