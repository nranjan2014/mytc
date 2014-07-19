#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <set>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

#define VIT(i, v) for (i = 0; i < v.size(); i++) 
#define IT(it, ds) for (it = ds.begin(); it != ds.end(); it++)
#define FUP(i, n) for (i = 0; i < n; i++)
#define O1(v) cout << v << endl
#define O2(v1, v2) cout << v1 << " " << v2 << endl
#define O3(v1, v2, v3) cout << v1 << " " << v2 << " " << v3 << endl
#define OVEC(v) { int iii; VIT(iii, v) cout << v[iii] << " " ; cout << endl; }
typedef vector <int> IVec;


class PageNumbers {
  public:
    vector <int> getCounts(int N);
    IVec gc(string s, int zero);
    map <string, IVec> cache[2];
};

IVec PageNumbers::gc(string s, int zero) 
{
  int i;
  int f;
  int rplus1;
  int nz;
  IVec rv, rec_rv;
  string r, news;

  /* Memoization */

  if (cache[zero][s].size() != 0) return cache[zero][s];

  rv.resize(10, 0);
  if (s.size() == 0) return rv;

  /* Base case -- single digit */

  if (s.size() == 1) {
    for (i = 1; i <= s[0]-'0'; i++) rv[i]++;
    if (zero) rv[0]++;
    cache[zero][s] = rv;
    return rv;
  }

  /* Calculate f, nz and r */

  f = s[0] - '0';
  for (i = 1; i < s.size() && s[i] == '0'; i++) ;
  nz = i-1;
  r = s.substr(nz+1);

  /* Add in r+1 of digit f, and (r+1)*nz of digit 0 */

  rplus1 = (r == "") ? 0 : atoi(r.c_str());
  rplus1++;

  rv[f] += rplus1;
  rv[0] += nz*rplus1;

  /* Call recursively on r and add that in */

  if (r != "") {
    rec_rv = gc(r, 1);
    for (i = 0; i < rv.size(); i++) rv[i] += rec_rv[i];
  }

  /* Make final recursive calls (see the writeup) */

  if (s[0] == '0') {
    cache[zero][s] = rv;
    return rv;
  }

  if (zero || s[0] > '1') news.push_back(s[0]-1);
  for (i = 1; i < s.size(); i++) news.push_back('9');
  rec_rv = gc(news, zero);
  for (i = 0; i < rv.size(); i++) rv[i] += rec_rv[i];

  cache[zero][s] = rv;
  return rv;
}

vector <int> PageNumbers::getCounts(int N)
{
  int i;
  string s;
  char buf[20];

  sprintf(buf, "%d", N);
  s = buf;
  return gc(s, 0);

}

int main(int argc, char **argv)
{
  int i;
  class PageNumbers TheClass;
  vector <int> retval;
  int N;

  if (argc != 2) { fprintf(stderr, "usage: a.out num\n"); exit(1); }

/*
  N = ;
*/


 if (atoi(argv[1]) == 0) {
    N = 7;
  }

 if (atoi(argv[1]) == 1) {
    N = 11;
  }

 if (atoi(argv[1]) == 2) {
    N = 19;
  }

 if (atoi(argv[1]) == 3) {
    N = 999;
  }

 if (atoi(argv[1]) == 4) {
    N = 543212345;
  }

 if (atoi(argv[1]) == 5) {
    N = 10;
  }

 if (atoi(argv[1]) == 6) {
    N = 101;
  }

  retval = TheClass.getCounts(N);
  VIT(i, retval) cout << retval[i] << endl;

  exit(0);
}
