#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class Botas
{
public:
    int numero;
    char lado;
};

int main()
{
    int n;
    cin >> n;
    int cont = 0;

    Botas bota[n];

    for(int i = 0; i < n; i++){
        cin >> bota[i].numero;
        cin >> bota[i].lado;
    }

    bool visitado[n];

    for(int i = 0; i < n; i++)
        visitado[i] = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(bota[i].numero == bota[j].numero)
            {
                if(visitado[i] == false && visitado[j] == false)
                {
                    if(bota[i].lado != bota[j].lado)
                    {
                        cont++;
                        visitado[i] = true;
                        visitado[j] = true;
                    }
                }
            }
        }
    }
    
    cout << cont;
}