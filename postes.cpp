#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int reforma = 0;
    int troca = 0;

    cin >> n;

    int poste;

    for(int i = 0; i < n; i++)
    {
        cin >> poste;
        if (poste < 50)
            troca++;
        else if((poste >= 50) && (poste < 85))
            reforma++; 
    }
    
    cout << troca << " " << reforma;

}