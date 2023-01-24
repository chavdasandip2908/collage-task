#include<stdio.h>
#include<conio.h>
// Below Program is Prectice Storage Class 1.auto 
void main(){

	auto int a= 10;
	if (1==1){
		auto int b =10; //Any Variable default using auto Storage Class
		printf("%d\n",a);
		printf("%d\n",b);
	}
		printf("%d\n",a);
//		printf("%d\n",b);  // Not Working Because Variable b Scope Within block { ....... } .

}
