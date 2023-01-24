#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char s[10000] ;
	scanf ("%s",&s);
	int i,j;
	int flo[9];
	int giro=0,one=0,two=0,three=0,fore=0,five=0,six=0,seven=0,eight=0,nine=0;
	for (i=0;i<strlen(s); i++){
		if (s[i] >='0'&& s[i] <= '9'){
			flo[s[i] - '0']++ ;
//			for (j=0 ; j <= i ; j++){
//				 
//			}
			
			
			
//			switch (s[i]){
//				case '0':flo[0]++;break;
//				case '1':flo[1]++;break;
//				case '2':flo[2]++;break;
//				case '3':flo[3]++;break;
//				case '4':flo[4]++;break;
//				case '5':flo[5]++;break;
//				case '6':flo[6]++;break;
//				case '7':flo[7]++;break;
//				case '8':flo[8]++;break;
//				case '9':flo[9]++;break;
//			}
		}
	}
	for (i = 0 ; i <10 ; i++ ){
		printf("%d ", flo[i]);
	}

	return 0 ; 
}
