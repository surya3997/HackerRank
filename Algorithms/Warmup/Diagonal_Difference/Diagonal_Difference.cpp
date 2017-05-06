#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,sum1=0,sum2=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
           if(a_i==a_j)
               sum1+=a[a_i][a_j];
       }
        sum2+=a[a_i][n-a_i-1];
    }
    
    int diff=sum1-sum2;
    if(diff<0)
        diff*=-1;
    
    cout<<diff;
    
    return 0;
}

