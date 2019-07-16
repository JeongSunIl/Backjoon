#include <stdio.h>

//static int hour=0, minute=0;
void 
alram_45(int*, int*);

int
main (){
    int hour=0, minute=0;
   
    scanf("%d %d",&hour, &minute);
    
    alram_45(&hour,&minute);

    printf("%d %d",hour, minute);
}

void alram_45(int* hour, int* minute){
    if(*minute-45 < 0){
        *minute = 60 + (*minute - 45);
        *hour -= 1;
        if(*hour < 0){
            *hour = 24 + *hour;
        }
    }
    else *minute -= 45;
}
