#include <stdio.h>
void main()
{
  int b, h, aot;

  printf("Enter base and hight of a triangle\n");
  scanf("%d %d", &b,&h);

  aot = (b*h)/2;
  printf("Area of the triangle = %d\n", aot);
}
