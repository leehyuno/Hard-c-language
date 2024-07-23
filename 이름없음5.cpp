#include<stdio.h>
int main(){
	
	int n,cnt;
	
	scanf("%d",&n);
	
	while(n>0){
		cnt++;
		n/=10;

	}
		printf("%d",cnt);
	
}
