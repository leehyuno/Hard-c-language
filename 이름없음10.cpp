#include<stdio.h>

int main(){
	int x,n,a,b,sum;
	scanf("%d",&x);
	scanf("%d",&n);
	
	
	
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		sum+=a*b;
	}
	
	
	if(sum==x){
		 printf("yes");
	}
	else{
		printf("no");
	}
	
	
	
}
