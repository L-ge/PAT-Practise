#include <iostream>
int main()
{
    using namespace std;
    int c1, c2;
    cin >> c1 >> c2;
    int t = c1 - c2;
    if (t % 100 >= 50)
    {
        t = t / 100 + 1;
    }
    else
    {
        t = t / 100;
    }
    cout <<
    return 0;
}
