#include<stdio.h>
int main(){
	
	int i,n,cnt=0;
	int sum = 0;

	scanf("%d",&n);

	for(i=1;i<=n;i++){
				
		if(n%i==0){
		cnt++;
		printf("%d ",i);
	
		sum+=i;
		}
	}
		printf("%d %d",sum,cnt);
}
		
		
	
