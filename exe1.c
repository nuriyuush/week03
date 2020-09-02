//
//  main.c
//  exe1
//
//  Created by НУРИЯ on 9/3/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
// Nuriya Umirbekova exe1
#include <stdio.h>
int main(void)
{
int* pc;
int c;
c=22;
printf("Address of c:%p\n",&c);
printf("Value of c:%d\n\n",c); pc=&c;
printf("Address of pointer pc:%p\n",pc);
printf("Content of pointer pc:%d\n\n",*pc);
c=11;
printf("Address of pointer pc:%p\n",pc);
printf("Content of pointer pc:%d\n\n",*pc);
*pc=2;
printf("Address of c:%p\n",&c);
printf("Value of c:%d\n\n",c);
return 0;
}
