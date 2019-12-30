#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> terrio(n);
    vector<int> pa;
    char resposta = 'N';

    for(int i = 0; i < n; i++)
        cin >> terrio[i];

    for (int i = 0; i < terrio.size(); i++)
    {
        if (terrio[i] <= 8)
        {
            pa.push_back(terrio[i]);
            terrio.erase(terrio.begin() + i);
            for (int j = 0; j < pa.size(); j++)
            {
                for (int k = 0; k < terrio.size(); k++)
                {
                    if (terrio[k] - pa[j] <= 8)
                    { 
                        pa.push_back(terrio[k]);
                        terrio.erase(terrio.begin() + k);
                    }
                }
            }
        }
    }

    if (terrio.size() == 0)
    {
        resposta = 'S';
    }

    cout << resposta;
}