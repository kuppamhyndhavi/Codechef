#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n>>s;
	     string cs = "";
        for (char nu : s) {
            if(nu=='A'){
                cs+='T';
            }
            else if(nu=='T'){
                cs+='A';
            }
            else if (nu=='C'){
                cs+='G';
            }
            else if(nu=='G'){
                cs+='C';
            }
        }
            cout<<cs<<endl;
	}
	return 0;

}
