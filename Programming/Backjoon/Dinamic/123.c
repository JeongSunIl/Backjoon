/*
정수 4를 1, 2, 3의 합으로 나타내는 방법은 총 7가지가 있다. 합을 나타낼 때는 수를 1개 이상 사용해야 한다.

1+1+1+1
1+1+2
1+2+1
2+1+1
2+2
1+3
3+1
정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.

input: 첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있다. (정수 n이 주어진다. n은 양수이며 11보다 작다.)
output: 각 테스트 케이스마다, n을 1, 2, 3의 합으로 나타내는 방법의 수를 출력한다.
*/

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

