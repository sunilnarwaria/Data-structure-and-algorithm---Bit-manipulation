
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin>>n;
    int flag = 0;
    string s = "";
    for(int i =31;i>=0;i--){
        int mask = (1<<i);
        
         if(flag != 0){
            if(n & mask){
                s += "1";
            }
            else{
                s += "0";
            }
         }
         else{
             if(n & mask){
                 flag = 1;
                 s += "1";
             }
            
         }
        
    }
    cout<<s;
}
