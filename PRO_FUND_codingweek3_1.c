#include<stdio.h>
int main(){
    int Num,x;
    scanf("%d",&Num);
    if(Num>100 && Num<=999){
      while(Num>=10){
        int a=1;
          while(Num>0){
              x = Num%10;
              a = a*x;
              Num = Num/10;
          }
          Num=a;
         printf("%d\n",a);  
        }
    }
    return 0;
}
