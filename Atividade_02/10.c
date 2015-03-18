#include <stdio.h>

maior(){
      int day1,month1,year1;
      int day2,month2,year2; 
      scanf("%d %d %d",&day1,&month1,&year1); 
      scanf("%d %d %d",&day2,&month2,&year2); 
      if(year1>year2) printf("%d/%d/%d",day1,month1,year1);
      if(year2>year1) printf("%d/%d/%d",day2,month2,year2);
      if(year1==year2){
            if(month1>month2) printf("%d/%d/%d",day1,month1,year1);
            if(month2>month1) printf("%d/%d/%d",day2,month2,year2);      
            if(month1==month2) {
                   if(day1>day2) printf("%d/%d/%d",day1,month1,year1);            
                   if(day2>day1) printf("%d/%d/%d",day2,month2,year2);           
                   if(day2==day1) printf("%d/%d/%d",day2,month2,year2);           
                               }
                       }
        }



main(){
       maior();
      
       }
