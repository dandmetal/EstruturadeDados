#include <stdio.h>

media(){
	float x,y,z;
	float peso1,peso2,peso3;
	scanf("%f %f %f",&x,&y,&z);
	scanf("%f %f %f",&peso1,&peso2,&peso3);
	float media;
	media=(x*peso1+y*peso2+z*peso3)/(peso1+peso2+peso3);
	printf("A media final foi:%f\n",media);
	
}


main(){

	media();
}
