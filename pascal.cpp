#include <iostream>
using namespace std;

int factorial(int n);
int nCr(int n, int r);
int main()
{
    int length = 0;
    cout << "Input length of the triangle: ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

int factorial(int n)
{
    int answer = 1;
    for (int i = 2; i <= n; i++)
    {
        answer *= i;
    }
    return answer;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}