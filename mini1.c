#include<stdio.h>

main(){
	
	int a,b,c;

	printf("enter value a :");
	scanf("%d",&a);
	printf("eneter value b:");
	scanf("%d",&b);
	printf("eneter value c:");
	scanf("%d",&c);
	if(a<b && a<c){
		printf("a is min.. ");
		}else if (b<a && b<c){
		printf ("b is min.. ");
		}else if (c<a && c<b){
			printf("c is min..");
		}else{
			("invalid input !");
		}
	
	}
		
	
