#include<stdio.h>
int input_array_size()
{
 int n;
printf("Enter the size of array:");
scanf("%d",n);
return n;
}
void input_array(int n, int a[n])
{
int i;
for(i=0;i<n;i++)
printf("Enter the elements %d number in array \n",i);
scanf("%d",a[i]);

}
int sum_composite_numbers(int n, int a[n])
{
int i;
int sum=0;
for(i=0;i<n;i++)
sum=sum+a[i];
return sum;
}
void out_put(int sum)
{
int i;
for(i=0;i<n-1;i++)
print("%d+",a[i]);
printf("%d=%d",a[i],sum);
}
int main()
{
int p,q,r,sum,n;
int a[n];
p= input_array_size();
q= input_array_size();
r= input_array_size();
input_array(n,a[n]);
sum=sum_n_arrays(n,a[n]);
out_put(n,a[n],sum);
return 0;
}