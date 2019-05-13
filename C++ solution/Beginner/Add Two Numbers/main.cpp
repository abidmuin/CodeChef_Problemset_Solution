//https://www.codechef.com/problems/FLOW001

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t], b[t], result[t];

    for(int i=0; i<t; i++){
        cin >> a[i] >> b[i];
        result[i] = a[i]+b[i];
    }

    for(int i=0; i<t; i++)
        cout << result[i] << endl;
    return 0;
}
