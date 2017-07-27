#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("flight_podaci.txt");
    ofstream fout1("flight_ref.txt");
    ofstream fout2 ("flight_test.txt");

    int a;
    int i,j,k;

    for(i=0;i<20;i++)
    {
        fin >> a ;
        fout1 << a <<endl;
        fout2 << a <<endl;
        for(j=0;j<=6;j++)
        {
            for(k=0;k<=5;k++)
            {
                fin >>a;
                fout1 <<a <<" ";

            }
            fout1 <<endl;
        }
        for(j=0;j<=2;j++)
        {
            for(k=0;k<=5;k++)
            {
                fin >>a;
                fout2 <<a <<" ";

            }
            fout2 <<endl;
        }
    }


    return 0;
}

