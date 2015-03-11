#include <stdio.h>
#include <stdbool.h>
int maior (int a,int b){
 if (a>=b) return a;
    else return b;
    }
int maioor (int a,int b,int c){
 int k;
    k=maior(a,b);
    if (c>=k) return c;
    else return k;
    }
int maiooor (int a,int b,int c,int d){
 int k;
    k=maioor(a,b,c);
    if (d>=k) return d;
    else return k;
    }
bool test1(int a,int b){
     if (a>=b){
           if (a>=maior(a,b)) return 1;    
               }
     if (b>=a) {
              if (b>=maior(a,b)) return 0;      
              }
     else return 0;        
     }
bool test2(int a,int b,int c)    {
     if (a>=b && a>=c){
             if (a>=maioor(a,b,c)) return 1;    
              } 
      if (b>=a && b>=c){
             if (b>=maioor(a,b,c)) return 1;    
              } 
      if (c>=b && c>=a){
             if (c>=maioor(a,b,c)) return 1;    
              }        
      else return 0;          
     } 
bool test3(int a,int b,int c,int d)    {
     if (a>=b && a>=c && a>=d){
             if (a>=maiooor(a,b,c,d)) return 1;    
              } 
      if (b>=a && b>=c && b>=d){
             if (b>=maiooor(a,b,c,d)) return 1;    
              } 
      if (c>=b && c>=a && c>=d){
             if (c>=maiooor(a,b,c,d)) return 1;    
              }
      if (d>=b && d>=a && d>=c){
             if (d>=maiooor(a,b,c,d)) return 1;    
              }         
      else return 0;          
     } 


main(){
     int a; 
     bool b; 
     a=maior (9,9);
     printf("%d\n",a);
     a=maioor(8,8,3);
     printf("%d\n",a);
     a=maiooor(6,10,3,10);
     printf("%d\n",a);
     b=test1(9,9); 
     printf("%d\n",b);
     b=test2(8,8,3); 
     printf("%d\n",b);
     b=test3(6,10,3,10); 
     printf("%d\n",b);
     
     
    
          
       } 
 
