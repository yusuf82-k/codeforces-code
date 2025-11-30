#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0;
		cin>>n;
		string s,str;
		cin>>s;
        char c=s[n-1];
        s=s+'o';
        int i=0;
        while(s[i]!='o')
        {
            if((s[i]=='a'||s[i]=='e')&&i!=0){
                if((s[i+1]!='a'&&s[i+1]!='e')&&(s[i+2]!='a'&&s[i+2]!='e')){
                    s.insert(i+2,1,'.');
                }
                else
                s.insert(i+1,1,'.');
            }
            i++;
        }
        while(!s.empty()){
        	char lastchar=s.back();
        	s.pop_back();
        	if(lastchar=='o')
        	break;
		}
		if(s.back()=='.')
		s.pop_back();

        cout<<s<<endl;
	    
	}
	return 0;
}