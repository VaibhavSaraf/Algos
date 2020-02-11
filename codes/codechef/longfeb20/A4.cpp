#include <iostream>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);

using namespace std;

int main()
{
    fast int T;
    cin >> T;
    int n, p, *arr;
    string yes, no;
    yes = "YES";
    no = "NO";
    while (T--)
    {
        cin >> n >> p;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (p % arr[i] == 0)
            {
                flag = true;
            }
        }
    }

    return 0;
}