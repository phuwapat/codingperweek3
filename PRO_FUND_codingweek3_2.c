#include<stdio.h>
int main(){
    int Number,x,y,z,k;
    int a = 1;
    int b = 1;
    int c = 1;
    int d = 1;
    scanf("%d",&Number);
    if(Number>100 && Number<=999){
        while (Number>0)
        {
                x = Number%10;
                a = a*x;
                Number = Number/10; 
        }
        printf("%d\n",a);
        while(a>0){
                y = a%10;
                b = b*y;
                a = a/10;
        }
        printf("%d\n",b);
        while (b>0)
        {
                z = b%10;
                c = c*z;
                b = b/10;
        }
        printf("%d\n",c);
         while (c>0)
        {
                k = c%10;
                d = d*k;
                c = c/10;
        }
        printf("%d\n",d);
    }
  return 0;
}