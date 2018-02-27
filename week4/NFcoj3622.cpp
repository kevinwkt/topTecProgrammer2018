#include <stdio.h>
#include <iostream>

using namespace std;

char arr[1000000];
char visited[1000000];

int main(){
	int vertice,edge;
	scanf("%d %d",&vertice,&edge);

	for(int i=0;i<vertice;i++){
		arr[i]=-1;
		visited[i]=-1;
	}

	int a,b;
	for(int i=0;i<edge;i++){
		scanf("%d %d",&a,&b);
		visited[a]=0;
		visited[b]=0;
		if(arr[a]==-1) arr[a]=b;
		else arr[b]=a;
	}

	bool anotherCycle=true;
	bool goOn=true;

	for(int i=0;i<vertice;i++){
		if(goOn==false) break;
		if(visited[i]==0){
			int curr=i;
			int count=1;
			while(true){
				visited[curr]=1;
				if(arr[curr]==-1) break;
				if(arr[curr]==i){
					if(count%3!=0){
						anotherCycle=false;
						goOn=false;
					}
					break;
				}
				curr=arr[curr];
				count++;
			}
		}
	}

	if(anotherCycle) printf("yes\n");
	else printf("no\n");

	return 0;
}
