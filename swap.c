#include<stdio.h>
void main(){

int a=32;
int  b=22;

printf("before swapping ");
printf("a=   %d \n",a);
printf("b=   %d \n",b);

printf("\n\n");
//swapping
 int temp=a;
a=b;
b=temp;


printf("after  swapping ");
printf("a=   %d",a);
printf("b=   %d",b);


}
