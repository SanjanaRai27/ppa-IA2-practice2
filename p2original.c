#include<stdio.h>
#include<math.h>
int input_side()
{
int a;
printf("Enter the sides of triangle:\n");
scanf("%d",&a);
return a;
}
int check_scalene(int a,int b,int c)
{
int s,area;
s=(a+b+c)/2;
area=sqrt(s*(s-a)(s-b)(s-c));
return area;
}
void output(int a,int b,int c,int isscalene)
{
int area;
printf("the area of triangle is\n",a,b,c,area);
}
int main()
{
int p,q,r,k;
p=input_side();
q=input_side();
r=input_side();
output(p,q,r,k);
return 0;
}