#include <iostream>

int main()
{
    using namespace std;
    int a[100];
    int n, m, count = 0;
    cin >> n >> m;
    m = m % n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - m; i < n; i++)
    {
        cout << a[i];
        count++;
        if (count < n)
        {
            cout << ' ';
        }
    }
    for (int i = 0; i < n - m; i++)
    {
        cout << a[i];
        count++;
        if (count < n)
        {
            cout << ' ';
        }
    }
    return 0;
}
