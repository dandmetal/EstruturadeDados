#include <stdio.h>
#include <Windows.h>

typedef struct data{
		WORD wYear;
		WORD wMonth;
		WORD wDay;
		WORD wHour;
		WORD wMinute;
	};
  typedef struct data time;
	
    
    data()
{

    time str_t;
	GetSystemTime(&str_t);
      

    
    printf("%d/%d/%d- %d:%d",str_t.wDay,str_t.wMonth,str_t.wYear,str_t.wHour,str_t.wMinute);
    
	
    
}
main(){
   data();
       }
