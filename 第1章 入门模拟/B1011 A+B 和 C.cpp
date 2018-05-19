#include <iostream>

int main()
{
    using namespace std;
    int T;
    int t = 1;
    cin >> T;
    while (T--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a + b > c)
        {
            cout << "Case #" << t++ << ": true\n";
        }
        else
        {
            cout << "Case #" << t++ << ": false\n";
        }
    }
    return 0;
}
