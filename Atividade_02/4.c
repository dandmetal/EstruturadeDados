#include <stdio.h>

maior(){
       int var1,var2,var3;
       scanf("%d %d %d",&var1,&var2,&var3);
       if (var1>var2 && var1>var3 && var2>var3) printf("%d %d %d",var3,var2,var1);
       if (var1>var2 && var1>var3 && var3>var2) printf("%d %d %d",var2,var3,var1);
       if (var2>var1 && var2>var3 && var1>var3) printf("%d %d %d",var3,var1,var2);
       if (var2>var1 && var2>var3 && var3>var1) printf("%d %d %d",var1,var3,var2);
       if (var3>var1 && var3>var2 && var2>var1) printf("%d %d %d",var1,var2,var3);
       if (var3>var1 && var3>var2 && var1>var2) printf("%d %d %d",var2,var1,var3);
       
       
       
        }
        
main(){
       maior();
       
       }
