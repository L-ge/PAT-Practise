#include <iostream>
int main()
{
    using namespace std;
    int count[5] = {0};
    int result[5] = {0};
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t % 5 == 0)      // A1
        {
            if (t % 2 == 0)
            {
                result[0] += t;
                count[0]++;
            }
        }
        else if (t % 5 == 1) // A2
        {
            if (count[1] % 2 == 0)
            {
                result[1] += t;
            }
            else
            {
                result[1] -= t;
            }
        }
        else if (t % 5 == 2) // A3
        {
            count[2]++;
        }
        else if (t % 5 == 3) // A4
        {
            result[3] += t;
            count[3]++;
        }
        else                 // A5
        {
            if (t > result[4])
            {
                result[4] = t;
            }
            count[4]++;
        }
    }
    if (count[0] == 0)
        cout << "N ";
    else
        cout << result[0] << ' ';
    if (count[1] == 0)
        cout << "N ";
    else
        cout << result[1] << ' ';
    if (count[2] == 0)
        cout << "N ";
    else
        cout << result[2] << ' ';
    if (count[3] == 0)
        cout << "N ";
    else
        cout << (double)result[3] / count[3] << ' ';
    if (count[4] == 0)
        cout << "N";
    else
        cout << result[4];
    return 0;
}
