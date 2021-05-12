/**
 * @file azioni.cpp
 *
 * @version 01.01 202145
 *
 * @brief https://training.olinfo.it/#/task/luiss_azioni/statement
 *
 * @ingroup azioni
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

// Variabiles
int N, last, temp, max_;

// Main code
int main()
{
  // Cncomment the following lines if you want to read/write from files
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  // Input
  cin >> N;
  cin >> last;
  N--;
  max_ = INT_MIN;

  for(int i = 0; i < N; ++i)
  {
      cin >> temp;
      if (abs(temp - last) > max_)
        max_ = abs(temp - last);
      last = temp;
  }

  // Output
  cout << max_ << endl;

  // End
  return 0;
}
