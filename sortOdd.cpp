#include <bits/stdc++.h> 
#include <vector>

int main () {
  vector <int> oddLocs;
  vector <int> oddNums;
  for (unsigned long i = 0; i < array.size(); i++)
  {
    if (array.at(i) % 2 != 0) // if odd number
    {
      oddLocs.push_back(i);
      oddNums.push_back(array.at(i));
    }
  }

  sort(oddNums.begin(), oddNums.end()); 
  for (unsigned long j = 0; j < oddNums.size(); j++)
  {
    array[oddLocs.at(j)] = oddNums.at(j);
  }
}
