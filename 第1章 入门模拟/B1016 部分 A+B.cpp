#include <iostream>

int main()
{
    using namespace std;
    long long a, b, da, db;
    cin >> a >> da >> b >> db;
    long long pa = 0, pb = 0;
    while (a != 0)
    {
        if (a % 10 == da)
        {
            pa = pa * 10 + da;
        }
        a = a / 10;
    }
    while (b != 0)
    {
        if (b % 10 == db)
        {
            pb = pb * 10 + db;
        }
        b = b / 10;
    }
    cout << pa + pb << endl;
    return 0;
}
