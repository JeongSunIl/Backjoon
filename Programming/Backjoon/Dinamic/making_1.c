#include <stdio.h>

#define MUL_2 2
#define MUL_3 3
#define ONE 1

int
mul_2 (int);

int
mul_3 (int);

void
checker (int state, int* num);


int
main (){ 
    int state;
    int count=0;
    int num;
     scanf("%d",&num);
     
     if(num == 1) count += 1;
     while( num > 1 && num<=1000000){
        
        if(mul_3(num)) state = mul_3(num);
        else if(mul_2(num)) {
            if(mul_2(num/2)) state = mul_2(num);
            else if(mul_3(num-1)) state = ONE;
            else state = mul_2(num); 
        }
        else state = ONE;
        checker(state, &num);
        count += 1;
        printf("num: %d, count: %d\n", num, count);
     }
     
     printf("%d",count);
}

void checker (int state, int* num){
    
    switch(state){
        case MUL_2: *num = *num/2; 
                  break;
        case MUL_3: *num = *num/3; 
                  break;
        default   : *num = *num - 1;
                  break; 
    }
  
}

int mul_2 (int num){
   return (num%2) == 0 ? MUL_2 : 0; 

}

int mul_3 (int num){
   return (num%3) == 0 ? MUL_3 : 0;

}
