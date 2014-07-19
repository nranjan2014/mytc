#include <sstream>
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

class ColorfulBricks {
    public:
        int countLayouts(string bricks);
};

int ColorfulBricks::countLayouts(string bricks)
{
    int i;
    set <char> S;

    for (i = 0; i< bricks.size(); i++)
    {
        S.insert(bricks[i]);
    }
    if (S.size() == 1) 
    {
        return(1);
    }
    else if ( S.size() == 2)
    {
        return(2);
    }
    else
    {
        return(0);
    }
}
