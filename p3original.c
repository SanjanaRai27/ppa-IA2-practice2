#include<stdio.h>
int input_number()
{
int a;
printf("Enter a number:\n");
scanf("%d",&a);
return a;
}
int is_composite(int n)
{
int a;
int flag=0;
if(a<=2){
  printf("Enter the number greater than 2");
}
else{
  for(int i=2;i<a;i++){
    if(a%i==0){
      printf("its a composite number");
      flag=1;
      break;
    }
  }
}
if (flag==0){
 return(0);
}
return(1) ;
}
void output(int n, int composite)
{
if(composite==0)
{
  printf("it is not composite");
}else{
  printf("it is composite");
}

}
int main()
{
  int p,q;
  p=input_number();
  output(q,p);
  return 0;
}