#include<stdio.h>
#include "misfunciones.h"

int main()
{
    int x,y,res=0,suma=0;
   do{
    printf("ingresa num1:");
    scanf("%d",&x);
    printf("ingresa num2:");
    scanf("%d",&y); 
    printf("el resultado de la suma es:%d\n",sumar_enteros(x,y));
    printf("el resultado de la resta es:%d\n",restar_enteros(x,y));
    }
    while(x !=0 || y !=0);
    return 0;
   
       
}
