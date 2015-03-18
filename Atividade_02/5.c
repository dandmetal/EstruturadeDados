#include <stdio.h>

maior(){
       int var1,var2,var3,var4;
       scanf("%d %d %d %d",&var1,&var2,&var3,&var4);
       if (var3>var1 && var3>var2 && var2>var1){
         if (var4<var1) printf("%d %d %d %d",var3,var2,var1,var4);
         if (var4>var1 && var4<var2) printf("%d %d %d %d",var3,var2,var4,var1);   
         if (var4>var2 && var4<var3) printf("%d %d %d %d",var3,var4,var2,var1);
         if (var4>var3) printf("%d %d %d %d",var4,var3,var2,var1);       
                
                     }
      
       
        }
        
main(){
       maior();
       
       }
