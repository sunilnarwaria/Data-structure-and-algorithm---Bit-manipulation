 int n;
 cin>>n;
 int count =0;
 while(n !=0){
     int rmsb = (n & -n);
    n -= rmsb;
   count++;
 }
cout<< count;
