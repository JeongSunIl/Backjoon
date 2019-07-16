#include <stdio.h>
#include <stdlib.h>

void cal (int num);

int count=0;

int
main () {
    int* input;
    int num;
    int i;


    scanf("%d", &num);

    input = (int*)malloc(sizeof(int)*num);

    for( i=0;i<num;i++)
        scanf("%d",input+i);

    for(i=0; i<num;i++){
        count=0;
        cal(*(input+i));
        printf("%d\n",count);
    }
}


void cal(int num){
    int i;

    for(i=1; i<=3;i++){
        if(num-i>0)cal(num-i);
        else if(num-i==0){
            count += 1;
            break;
        }
    }
       
    
}    

