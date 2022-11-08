#include <stdio.h>
#include<math.h>
int main
{
  printf("Enter a, b, and c: ");
  double a,b,c;
  scanf("%1f",&a);
  scanf("%1f",&b);
  scanf("%1f",&c);
  if(b*b-4.0*a*c==0)
  {
    double x1=(b+pow(b*b-4.0*a*c,0.5))/(2.0*a)'
    printf("The equation has 2 repeated roots.\n");
    printf("Root is %f\n",x1);
    }
    else if(b*b-4*a*c>0)
    {
      double x1=(-b+pow(b*b-4.0*a*c,0.5))/(2.0*a);
      double x2=(-b+pow(b*b-4.0*a*c,0.5))/(2.0*a);
      printf("The equation has 2 different real roots.\n");
      printf("Root is %f and %f\n",x1,x2);
      }
