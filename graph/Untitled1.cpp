#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define e 0.00001
float A[100];

float maxRoot(int degree)
{
    float in = sqrt((pow((A[degree - 1] / A[degree]), 2)) - 2 * (A[degree - 2] / A[degree]));
    return in;
}

float f(float root, int deg)
{
    float b[deg + 1];
    b[deg] = A[deg];
    while (deg > 0)
    {
        b[deg - 1] = A[deg - 1] + b[deg] * root;
        deg--;
    }
    return b[deg];
}

void bisection(float a, float b, int n,float x)
{
    float ds = x, rel_e;
    int cnt_root = 0, it = 0;
    float x1 = a, x2 = a + ds, xr;
    cout << "No of root "<<" Approximate Root "<< " Number of Iteration "<< "  Relative error "<< endl;
    while (x2 < b)
    {
        x1 = a;
        x2 = x1 + ds;
        if (f(x1, n) * f(x2, n) > 0)
        {
            if (x2 < b)
            {
                a = x2;
            }
        }
        else
        {
            do
            {
                xr = (x1 + x2) / 2;
                if (f(x1, n) * f(xr, n) < 0)
                {
                    x2 = xr;
                }
                else
                {
                    x1 = xr;
                }
                rel_e = fabs((x2 - x1) / x2);
            } while (rel_e > e);
            cout <<"  "<< ++cnt_root <<"\t     "<< xr <<"\t \t\t"<< it <<"\t\t"<< rel_e << endl;
            if (x2 > b)
            {
                break;
            }
        }
        ++it;
        a = x2;
    }
}

int main()
{
    cout << fixed << setprecision(6);
    float a, b,x;
    int n;
    cout << "Enter the highest degree of the equation: ";
    cin >> n;
    cout << "Enter values of coefficients:" << endl;
    for (int i = n; i >= 0; i--)
    {
        cout << "Coefficient x[" << i << "] = ";
        cin >> A[i];
    }
    b = maxRoot(n);
    a = -1 * b;
    cout << "Possible interval " << a << " and " << b << endl;
    for (int i=0;i<2;i++)
    {
        cout<< "Enter the value of ds :"<<endl;
    cin>>x;
    bisection(a, b, n, x);
    }

}
