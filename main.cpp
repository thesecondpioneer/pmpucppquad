#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    cout << ((-b+sqrt(b*b-4*a*c))/(2*a)) << '\n' << ((-b-sqrt(b*b-4*a*c))/(2*a));
    return 0;
}
