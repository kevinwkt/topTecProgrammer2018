#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int min(int a, int b){
	return a>b?b:a;
}

int main(){

	int T;
	scanf("%d",&T);

	while(T--){
		string s1;
		string s2;
		cin>>s1>>s2;
		unordered_map<char,int> ss1;
		unordered_map<char,int> ss2;
		for(int i=0;i<s1.length();i++){
			if(ss1.find(s1[i])==ss1.end()){
				ss1[s1[i]]=1;
			}else{
				ss1[s1[i]]++;
			}
		}

		for(int i=0;i<s2.length();i++){
			if(ss2.find(s2[i])==ss2.end()){
				ss2[s2[i]]=1;
			}else{
				ss2[s2[i]]++;
			}
		}
		
		int max=123456789;
		for(auto it=ss2.begin();it!=ss2.end();it++){
			if(ss1.find(it->first)!=ss1.end()){
				max=min(max,ss1[it->first]/it->second);
			}else{
				max=0;
				break;
			}
		}


		printf("%d\n",max);
	}

	return 0; 
}
