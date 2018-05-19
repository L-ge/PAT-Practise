#include <iostream>
int main()
{
    using namespace std;
    int n, afail = 0, bfail = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if (a1 + b1 == a2 && a1 + b1 != b2)
        {
            bfail++;
        }
        else if (a1 + b1 != a2 && a1 + b1 == b2)
        {
            afail++;
        }
    }
    cout << afail << ' ' << bfail << endl;
    return 0;
}
