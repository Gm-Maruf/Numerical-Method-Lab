#include<bits/stdc++.h>
using namespace std;

float fun(float a)
{
 float b;
 b=a*a-4*a-10;    /*just change the equation according to your wish */
 return(b);
}
int  main()
{
 float x1,x2,x3,f1,f2,f3,e;
 printf("enter the values of x1 and x1: ");
 scanf("%f",&x1);
 printf("enter the values of x1 and x2: ");
 scanf("%f",&x2);
 printf("x1\t      x2\t         x3\t          f1\t            f2\t");
 do
 {
  f1=fun(x1);
  f2=fun(x2);
  x3=((x1*f2)-(x2*f1))/(f2-f1);
  e=fabs((x3-x2)/(x3));
  x1=x2;
  x2=x3;

  printf("\n%f\t    %f\t     %f\t     %f\t    %f\t",x1,x2,x3,f1,f2);

 }
 while(e>0.001);

  return 0;
}
