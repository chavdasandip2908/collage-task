#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int a, b , n ,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
  	
  	if(b>9){
		for( i = a ; i<10 ; i++ ){
			switch (i){
				case 1:printf("one\n");break;
				case 2:printf("two\n");break;
				case 3:printf("three\n");break;
				case 4:printf("fore\n");break;
				case 5:printf("five\n");break;
				case 6:printf("six\n");break;
				case 7:printf("seven\n");break;
				case 8:printf("eight\n");break;
				case 9:printf("nine\n");break;
			}
		}
		for( i = a ; i<10 ; i++ ){
			switch (i){
				case 1:printf("odd\n");break;
				case 2:printf("even\n");break;
				case 3:printf("odd\n");break;
				case 4:printf("even\n");break;
				case 5:printf("odd\n");break;
				case 6:printf("even\n");break;
				case 7:printf("odd\n");break;
				case 8:printf("even\n");break;
				case 9:printf("odd\n");break;
			}
		}
	}
	else{
		for( i = a ; i<10 ; i++ ){
			switch (i){
				case 1:printf("one\n");break;
				case 2:printf("two\n");break;
				case 3:printf("three\n");break;
				case 4:printf("fore\n");break;
				case 5:printf("five\n");break;
				case 6:printf("six\n");break;
				case 7:printf("seven\n");break;
				case 8:printf("eight\n");break;
				case 9:printf("nine\n");break;
			}
		}	
	}
	return 0;
}
