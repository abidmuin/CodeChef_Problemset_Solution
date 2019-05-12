//https://www.codechef.com/problems/HS08TEST

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;   //x=withdraw amount, y=initial balance, z=transaction cost
    double y, z=0.50, output;
    bool isMultiple;
    cin >> x >> y;

    if(x%5==0)
        isMultiple = true;
    else
        isMultiple = false;

    if(isMultiple && ((double)x+z)<y)
        output = y-((double)x+z);
    else
        output = y;

    cout << setprecision(2) << fixed << output << endl;
    return 0;
}
