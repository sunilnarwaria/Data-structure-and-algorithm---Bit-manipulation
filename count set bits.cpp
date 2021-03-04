//  right most set bit ko nikalo o(1) mai phir n mai se minus kr do toh n ki right most set bit 0 ho jayegi phir continue kr jb tk n = 0 nhi ho jata 

int n;
 cin>>n;
 int count =0;
 while(n !=0){
     int rmsb = (n & -n);
    n -= rmsb;
   count++;
 }
cout<< count;
