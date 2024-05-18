#include <stdio.h>
#include "lr.h"

int main(void) 
{
  int n;
  printf("Введите номер лабы: ");
  scanf("%d",&n);
  if(n==1)
    return lr_1();
  else if(n==2)
    return lr_2();
  else if(n==3)
    return lr_3();
  else if(n==4)
    return lr_4();
  else if(n==5)
    return lr_5();
  else if(n==6)
    return lr_6();
  else if(n==7)
    return lr_7();
    printf("такой лабы нет");
}
