/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Reading Data
 *
 */

#include <bits/stdc++.h>

using namespace std;

int vowel(char c)

{

  if ((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') ||

      (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
    return 1;

  return 0;
}

int main()
{

  ifstream fi;

  ofstream fo;

  string input, output;

  cout << "Enter name of input file:\n";

  cin >> input;

  cout << "Enter name of output file:\n";

  cin >> output;

  fi.open(input);

  fo.open(output);

  char c;

  while (fi >> c)

  {

    if (vowel(c))
      fo << c << " ";
  }

  return 0;
}