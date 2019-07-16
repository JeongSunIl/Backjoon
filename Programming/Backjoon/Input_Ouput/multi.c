#include <stdio.h>



int counting(int input);

int
main() {
    int input1, input2;
    int count=0, i, num;
    int sum=0;

    scanf("%d", &input1);
    scanf("%d", &input2);
    count = counting(input2);       
    for(i=1 ; count>0;i*=10){
        num = input2/i;

        if(count == 1)
            num = num%10; 
        else 
            num = num%10;

        if(count>1) sum += input1*num*i;
        else 
           sum += input1*num*i;
        printf("%d\n",input1*num);
        count -= 1;
    } 
        printf("%d\n",sum);
        
}

int counting(int input){
    int i;
    int count=0;
    int num = input;
    for(i=1;num>0;i*=10){
        num = input/i;
        if(num == 0) break;
        count += 1;
    }

    return count;
}
    
    
