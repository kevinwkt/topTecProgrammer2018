#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

int main(){

	string s1;
	string s2;
	
	
	while(cin>>s1>>s2){
		int count=0;
		for(int i=0;i<s2.length();i++){
			if(count==s1.length()) break;
			if(s2[i]==s1[count]) count++;
		}

		if(count==s1.length()) cout<<"Yes\n";
		else cout<<"No\n";
	}
	

	return 0;
}
