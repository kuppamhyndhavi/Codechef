#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    string S,T,M="";
	    cin>>S>>T;
	    if(S.length() !=5 || T.length() !=5){
	        cerr<<"Error: Input strings must be of length 5."<<endl;
	        return 1;
	    }
	    for(int i=0;i<5;i++){
	        if(S[i]==T[i]){
	            M+='G';

	        }
	        else{
	            M=+'B';
	        }


	    }
	    cout<<M<<endl;
	}
	return 0;
}

	



