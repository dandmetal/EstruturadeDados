#include<stdio.h>

media(){
	float trab,av,ex,final;
	scanf("%f %f %f",&trab,&av,&ex);
	final=(trab*2+av*3+ex*5)/10;
	if (final>=8 && final <=10) printf("A");
	if (final>=7 && final <8) printf("B");
	if (final>=6 && final <7) printf("C");
	if (final>=5 && final <6) printf("D");
	if (final>=0 && final <5) printf("E");
		
}


main(){
	media();
}
