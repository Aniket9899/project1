#include<stdio.h>
int main()
{
 int num1,pr,z;
 printf("Enter the Number :");
 scanf("%d",&num1);
 for(int i=1;i<=num1;i++){
    if(num1%i==0){
        z++;
        //break;
    }


}
if(z==2){
        printf("prime number");
    }
    else{
        printf("not prime");
    }

 }
