#include<stdio.h>
#include <math.h>
void input(int *n ,int *r){
  printf("enter the value of n:");
  scanf("%d",n);
  printf("enter the value of r:");
  scanf("%d",r);
}
int fact(int n){
  int factn=1;
  int r;
  int i;
  for( i=2;i<=n;i++)
  {
    factn=factn*i;
  }
  return factn;
}
int ncr(int n,int r){
  float result;
  result=(fact(n))/(fact(r)*fact(n-r));
  return result;
}
void output(int n,int r,float result){
  printf("value of ncr is %f",result);
}
int main(){
  int n,r;
  float result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  
}