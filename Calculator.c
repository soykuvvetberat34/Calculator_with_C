#include <stdio.h>

int main(){
    char opt;
    float val1,val2,result=0;

    printf("-----CALCULATOR----- \n");
    printf("enter operator(+,-,*,/):");
    scanf("%c",&opt);
    printf("enter first value:");
    scanf("%f",&val1);
    printf("enter second value:");
    scanf("%f",&val2);

    switch(opt){
    case '+':
        result=val1+val2;
        printf("result:%f",result);
        break;
    case '-':
        result=val1-val2;
        printf("result:%f",result);
        break;
    case '*':
        result=val1*val2;
        printf("result:%f",result);
        break;
    case '/':
        result=val1/val2;
        printf("result:%.3f",result);
        break;
    default:
        printf("operator not defined!");


    }

return 0;




}
