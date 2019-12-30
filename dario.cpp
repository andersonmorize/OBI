#include <bits/stdc++.h>

using namespace std;

int matriz[5][5] = {
    {0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1},
    {1, 0, 0, 0, 1},
    {1, 1, 0, 0, 0}
  };

int main()
{
    int n;
    cin >> n;

    int d, x, cd = 0, cx = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> d >> x;

        if(matriz[d][x])
            cd++;
        else
            cx++;
    }

    if(cd > cx)
        cout << "dario";
    else
        cout << "xerxes";    
}
