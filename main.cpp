#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double root1 , root2;
    // TODO
    cin >> a >> b >> c; 
   // quadratic (-b +- sqrt(b * b - 4 * a * c)) / (2 * a)
    // TODO
    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);

    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    // TODO
    // TODO

    // TODO
    // TODO

    cout << setprecision(2) << fixed;
    // TODO
    if (root1 > root2) {
        cout << root1 << " " << root2;
    } else {
        cout << root2 << " " << root1;
    }
    // figuring out which one is larger and printing it first.
    return 0;
}
