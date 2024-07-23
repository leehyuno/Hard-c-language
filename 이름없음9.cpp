#include<stdio.h>
int main(){
	
	int n,m=0;

	scanf("%d",&n);
	int fuck=n;
		while(n>0){
		
		m=m*10+n%10;
		n/=10;
	}
	
	
		printf("%d ",m);
		printf("%d",m+fuck);
		
}
