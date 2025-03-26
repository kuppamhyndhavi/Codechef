#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int pa=(500-2*x)+(1000-4*(x+y));
	    int pb=(1000-4*y)+(500-2*(x+y));
	    int mp=max(pa,pb);
	    cout<<mp<<endl;
	    
	}

}
