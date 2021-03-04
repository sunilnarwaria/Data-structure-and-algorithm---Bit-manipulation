#include<stdio.h>
void rmsb(unsigned n)
{
   int ans = ( n & -n);
   cout<<binary(ans);
}
 
int main(void)
{
   int n;
  
  cin>>n;
  rmsb(n);
}
