#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int  langth , i , j , temp ;
    float mean ,sum=0,median ;
    int ar[langth];
    scanf("%d",&langth);
    for(i=0 ; i<langth;i++){
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
     mean = sum/langth;
     float te= (langth/2)+(1/2) ;
    for(i=0 ; i<langth;i++){
        for(j=i+1 ; j<langth;j++){
            if (ar[i]>ar[j]) {
                temp= ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
         
    } 
//    int range = floor(langth/2);
median=ar[te];
    for(i=0;i<langth;i++){
     	if(langth%2==0){
		     median=ar[langth/2-1]+ar[langth/2]/2;
			}
//		if(langth%2!=0){
//			median=ar[range];
//		}
		}
     printf("%.1f\n",mean);  //1.5
     printf("%.0f\n",median);  //2
     
    return 0;
}

