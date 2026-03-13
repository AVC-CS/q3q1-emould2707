#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c; 
   // quadratic (-b +- sqrt(b * b - 4 * a * c)) / (2 * a)

    
    
    cout << setprecision(2) << fixed;
    if (a == 0){
        cout << "value cant = 0" << endl;
        double root = -c / b;
        cout << root << " " << root;
    }

    double root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    double root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    // TODO
    if (root1 > root2) {
        cout << root1 << " " << root2;
    } else {
        cout << root2 << " " << root1;
    }
    // figuring out which one is larger and printing it first.
    return 0;
}
