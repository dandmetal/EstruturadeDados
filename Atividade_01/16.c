#include <stdio.h>

sal(){
	float sal,aum,imp;
	scanf("%f",&sal);
	aum=sal*0.05;
	imp=sal*0.07;
	sal=sal+aum-imp;
	printf("%f",sal);
	
	
}

main(){
	sal();
	
}
