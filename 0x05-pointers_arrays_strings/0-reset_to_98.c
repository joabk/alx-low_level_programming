#include<stdio.h>

/*
 * main - 
 *
 * Return: Always 0
 */

int reset_to_98(int *cc){
  *cc = 98;
  return 0;
}

int main(void){
  int c;
  int *p;

  c = 402;
  printf("c=%d\n", c);
  p = &c;
  reset_to_98(p);
  printf("c=%d\n", c);

  return 0;
}
