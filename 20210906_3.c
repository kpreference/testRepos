#include<stdio.h> 
int main(){
	int n;
	scanf("%d",&n);
	if(n>0){
		printf("positive number");
		
	} else if (n<0){
		printf("negative number");
	} else{
		printf("0");
	} 
	return 0;
}