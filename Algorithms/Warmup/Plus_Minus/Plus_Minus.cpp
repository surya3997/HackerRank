#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    double pos,neg,zero;
    pos=neg=zero=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]<0)    neg++;
        else if(arr[arr_i]==0)  zero++;
        else    pos++;
    }
    
    cout<<setprecision(6)<<pos/n<<"\n";
    cout<<setprecision(6)<<neg/n<<"\n";
    cout<<setprecision(6)<<zero/n;
    
    return 0;
}

