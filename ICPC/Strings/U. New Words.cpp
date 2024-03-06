#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int c_e = 0, c_g = 0, c_y = 0, c_p = 0, c_t = 0;

    for (char c : str)
    {
        if (c == 'e' || c == 'E')
        {
            c_e++;
        }
        else if (c == 'g' || c == 'G')
        {
            c_g++;
        }
        else if (c == 'y' || c == 'Y')
        {
            c_y++;
        }
        else if (c == 'p' || c == 'P')
        {
            c_p++;
        }
        else if (c == 't' || c == 'T')
        {
            c_t++;
        }
    }

    int count = min(c_e, min(c_g, min(c_p, min(c_y, c_t))));

    cout << count << endl;

    return 0;
}