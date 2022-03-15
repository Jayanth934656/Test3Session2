#include<stdio.h>
#include<math.h>
int input_degree()
{
  int n;
  printf("enter the degree of the polynomial:");
  
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("enter the value of x:");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
  for(int i=n;i>=0;i--)
    {
      printf("enter the coefficients of x^%d:\n",i);
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  float result=0;
  for(int i=n;i>0;i--)
    {
      result=(result+a[i])*x;
    }
  result=result+a[0];
  
}
void out_put(int n,float a[n],float x,float result)
{
   result=0;
  for(int i=n;i>0;i--)
    {
      result=(result+a[i])*x;
    }
  
   result=result+a[0];
  printf("the value of the polynomial at %f is %f\n",x,result);
}
int main()
{
 int n;
  float result,x;
  n=input_degree();
  float a[n];
  x=input_x();
  input_coefficients(n,a);
  result=evaluate_polynomial(n,a,x);
  out_put(n,a,x,result);
  return 0;
  
}