#include<iostream>
using namespace std;
int main()
{
      int n, s, i, j;
      cout << "Cetak Pola: ";
      cin >> n;
      for (i = n; i >= 1; i--)
      {
            for (s = i; s < n; s++)
                  cout << " ";
            for (j = 1; j <= (2 * i - 1); j++)
                  cout << "* ";
            cout << "\n";
      }
      return 0;
}
