#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main() 
{
    srand(time(0));
    int i, n, j, t, x;
    float indice;
    cout << "quanti numeri generare?" << endl;
    cin >> n;
    vector<int>r[n];
    i=0;
    while (i<n)
    {
        r[i]= rand()%101;
        i=i+1;
    }
    i=0;
    while (i<n)
    {
        j=0;
        while (j<=n-2)
        {
            if (r[j]>r[j+1])
            {
                t=r[j];
                r[j]= r[j+1];
                r[j+1] = t;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<n)
    {
        cout << r[i] << endl;
        i=i+1;
    }
    cout << "inserire un valore " << endl;
    cin >> x;
    i=0;
    while (i<=n-1 and indice =-1)
    {
        if (r[i] = x)
        {
            indice =i;
        }
    }
    if (indice =-1)
    {
        cout << "valore non trovato" << endl;
    }
    else
    {
        cout << "il valore " << x << " si trova nella cella " << indice << endl;
    }

}

//LEGGERE LE ISTRUZIONI NEL FILE README.md