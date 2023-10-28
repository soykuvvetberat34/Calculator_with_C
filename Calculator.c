#include <stdio.h>

int main(){
    char opt;
    int val1,val2,result=0;

    printf("-----CALCULATOR----- \n");
    printf("enter operator(+,-,*,/):");
    scanf("%c",&opt);
    printf("enter first value:");
    scanf("%d",&val1);
    printf("enter second value:");
    scanf("%d",&val2);

    switch(opt){
    case '+':
        result=val1+val2;
        printf("result:%d",result);
        break;
    case '-':
        result=val1-val2;
        printf("result:%d",result);
        break;
    case '*':
        result=val1*val2;
        printf("result:%d",result);
        break;
    case '/':
        result=val1/val2;
        printf("result:%d",result);
        break;
    default:
        printf("operator not defined!");


    }

return 0;




}
