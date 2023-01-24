#include<stdio.h>
#include<conio.h>

void main(){
	int i, j ,n ,col=1; 
	printf("Enter a any Number : ");
	scanf("%d",&n);
	
	
	for (i=1;i<=n;i++){
		if (i<=col){
			printf(" * ");			
		}
		else {
			printf("   ");
		}
		printf("\n");
		col++;
	}
	
	
	
	
	
	
	
	
//	
//	
////	int i, j ,n ;
////	printf("Enter a any Number : ");
////	scanf("%d",&n);
////	
////	for (i=1;i<=n;i++){
////		if (i==1 || i==n){
////			for(j=1;j<=n;j++){
////				printf(" 1 ");
////			} 
////			printf("\n\n");
////		}
////		else {
////			for(j=1;j<=n;j++){
////				if(j==1||j==n){
////					printf(" 2 ");
////				}
////				else{
////					printf(" 3 ");
////				}
////			}
////			printf("\n\n");
////		}
////	}
//	return 0;
}
