#include<stdio.h>
#include<conio.h>
// Below Program is Prectice Storage Class 1.static 

void fun(){
	auto int a =10;
	static int b = 10 ;
	printf("%d %d \n",a,b);
	a++;
	b++;
	
}

void main(){

	fun(); // a = 10 and b = 10 
	fun(); // a = 10 and b = 11 
	fun(); // a = 10 and b = 12
	// auto Variable Not Increment Because auto Variable Life-Time Within Block { .... }
	// static Variable increment Because Static Variable Life-Time All Code Execute
}
