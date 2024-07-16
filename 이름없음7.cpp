#include<stdio.h>

int main(){
	int n,sum,num;
	sum=0;
	num=0;
	scanf("%d",&n);
	
	
	for(int i=1;i<=n;i++){
		
		if(i%6==0){ 
			sum+=i;
			num=num+1;
			printf("%d ",i); 
		}
	
	}

	printf("°¹¼ö: %d\n",num);
	printf("ÇÕ : %d",sum );
	
	
	
}
