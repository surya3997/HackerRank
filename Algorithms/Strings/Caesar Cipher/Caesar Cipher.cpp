#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    
    for (int i = 0; i < n; i++) {
        int ascii = s[i];
        if (ascii >= 65 && ascii <= 90)
            cout << char((((int(s[i]) + k) - 65) % 26) + 65);
		else if (ascii >= 97 && ascii <= 122)
			cout << char((((int(s[i]) + k) - 97) % 26) + 97);
        else
            cout << s[i];
    }
    
    return 0;
}

