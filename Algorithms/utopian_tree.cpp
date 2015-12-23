/* 
 * Author: sr1k4n7h
 */

#include <iostream>
using namespace std;

int height(int n) {
    if (n==0)
        {
        return 1;
    }
    
    else if (n%2==0)
        {
        return (height(n-1)+1);
    }
    else
        {
        return 2*(height(n-1));
    }   
}
int main() {
    int T;
    cin >> T;
    if (T<=10&&T>=1){
    while (T--) {
        int n;
        cin >> n;
        if (n>=0 && n<=60)
            {
        cout << height(n) << endl;
        }
    }
    }
}
