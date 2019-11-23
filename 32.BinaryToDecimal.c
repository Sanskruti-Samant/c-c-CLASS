
#include<stdio.h>
#include<math.h>
int binToDec(long int bNum){
int i=0,temp,result=0;
while(bNum!=0){
    temp=bNum%10;
    bNum/=10;
    result+=((int)round(pow(2,i)))*temp;
    i++;
}
return result;
}
int main(){
long int binaryVal;
int decimalVal;
printf("Enter the binary value");
scanf("%ld",&binaryVal);
decimalVal=binToDec(binaryVal);
printf("The decimal value is: %d",decimalVal);

}
