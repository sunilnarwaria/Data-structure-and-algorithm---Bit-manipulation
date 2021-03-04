// Method 1

void bin(unsigned n)
{
    if (n > 1)
        bin(n >> 1);
      cout<<(n&1);
}
 
// Driver code
int main(void)
{
  int n;
  cin>> n;
    bin(n);
   
    return 0;
}



// method 2
 #include<stdio.h>
void bin(unsigned n)
{
    unsigned i;
    for (i = 31; i >=0; i--)
        int mask = 1<<i;
         cout<< (n & mask);
      
}
 
int main(void)
{
    bin(7);
    printf("\n");
    bin(4);
}

