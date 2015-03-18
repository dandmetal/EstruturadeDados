#include <stdio.h>

controle(){
        int I;
        float a,b,c;
        scanf("%d %f %f %f",&I,&a,&b,&c);
        switch (I){
   case 1:
       if (a>b && a>c && b>c) printf("%f %f %f",c,b,a);
       if (a>b && a>c && c>b) printf("%f %f %f",b,c,a);
       if (b>a && b>c && a>c) printf("%f %f %f",c,a,b);
       if (b>a && b>c && c>a) printf("%f %f %f",a,c,b);
       if (c>a && c>b && b>a) printf("%f %f %f",a,b,c);
       if (c>a && c>b && a>b) printf("%f %f %f",b,a,c);
   break;

   case 2:
       if (a>b && a>c && b>c) printf("%f %f %f",a,b,c);
       if (a>b && a>c && c>b) printf("%f %f %f",a,c,b);
       if (b>a && b>c && a>c) printf("%f %f %f",b,a,c);
       if (b>a && b>c && c>a) printf("%f %f %f",b,c,a);
       if (c>a && c>b && b>a) printf("%f %f %f",c,b,a);
       if (c>a && c>b && a>b) printf("%f %f %f",c,a,b);
   break;
   
   case 3:
       if (a>b && a>c) printf("%f %f %f",b,a,c);
       if (b>a && b>c) printf("%f %f %f",a,b,c);
       if (c>a && c>b) printf("%f %f %f",a,c,b);
       
   break;

   default:
     printf("Valor Invalido");
}  
           

           }
           
main(){
       controle();
       
       }
