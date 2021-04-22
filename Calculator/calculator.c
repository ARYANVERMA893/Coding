#include<stdio.h>
int main(){
    //Using Switch Case
    int a,b,option,result;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    printf("Select an option:\n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n");
    scanf("%d",&option);
switch(option)
{
    case 1: result = a+b;
    printf("result=%d",result);
    break;
    case 2: result = a-b;
    printf("result =%d",result);
    break;
    case 3: result = a*b;
    printf("result =%d",result);
    break;
    case 4:result = a/b;
    printf("result =%d",result);
    break;
    default:
    printf("1.invalid section\n 2.only two input can be taken at one time\n");
return 0;
}


return 0;
}