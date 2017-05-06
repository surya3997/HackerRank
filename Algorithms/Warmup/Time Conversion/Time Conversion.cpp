#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    
    if(time[0]=='1' && time[1]=='2' && time[8]=='A')
    {
        time[0]='0'; time[1]='0';
    }
    
    
    if(time[8]=='P')
    {
        if(!(time[0]=='1' && time[1]=='2'))
        {
            int temp1=(int)time[0]; temp1-=48;
            int temp2=(int)time[1]; temp2-=48;
            int num=10*temp1+temp2+12;
            if(num==24) num=0;
            temp2=num%10;
            temp1=num/10;
            temp1+=48;
            temp2+=48;
            time[0]=(char)temp1;
            time[1]=(char)temp2;
        }
    }
    
        
    for(int i=0;i<8;i++){
        cout<<time[i];
    }
    
    return 0;
}

