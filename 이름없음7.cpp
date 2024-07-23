#include<stdio.h>
int main(){
	
	int n=1;
	int sum=0,sum2=0;
	

	
	while(n<=10){
		
		if(n%2==0){
		sum+=n;
		
	}
		else{
		sum2+=n;
	}
	
	
		n++;
	}
		printf("%d %d",sum,sum2);
}
