#include<stdio.h>
int main(){
	
	int n;
	scanf("%d",&n);
	switch(n/10){
		case 0 :
			printf("유소년");
			break;
		case 1 :
			printf("청소년");
			break;
		case 2 :
			printf("청 년");
			break;
		}
	}
			 
