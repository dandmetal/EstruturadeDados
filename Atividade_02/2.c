#include<stdio.h>

media(){
  float trab,av,ex,final;
  scanf("%f %f %f",&trab,&av,&ex);
  final=(trab+av+ex)/3;
  printf("%f\n",final);
  if (final>=0 && final<3){
  	printf("Reprovado\n");
  } 
  if (final>=3&& final <7) {
  	printf("Exame\n");
  	printf("Precisa tirar 6 no exame\n");
  }
  if (final>=7 && final <=10){
  	printf("Aprovado\n");
  } 
		
}


main(){
	media();
}
