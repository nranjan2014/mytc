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
#define OVEC(v) { int iii; VIT(iii, v) cout << v[iii] << " " ; cout << endl; }

typedef vector <string> SVec;

class InternetSecurity {
    public:
        vector <string> determineWebsite(vector <string> address, vector <string> keyword, vector <string> dangerous, int threshold);
};

vector <string> InternetSecurity::determineWebsite(vector <string> address, vector <string> keyword, vector <string> dangerous, int threshold)
{
    int i, j, k, l, m, n;
    SVec key;
    SVec temp;
    SVec ret;
    string s;
    int count;
    count =0;
    l =0;
    istringstream ss;
    int dan;

while ( (numdan <= address.size()) || (dan == 0) || () )
{
    for ( i = 0; i < address.size(); i++)
    {
        dan = 0;
        l = 0;
        ss.clear();
        key.clear();
        ss.str(keyword[i]);
        while( ss >> s)
        {
            key.push_back(s);    
            ss.clear();
        }
        temp.clear();
        for ( j = 0; j < key.size(); j++)
        {
            g = 0;
            for ( k = 0; k < dangerous.size(); k++)
            {
                if ( key[j] == dangerous[k])
                {
                    l++;
                    g++; // for that key to be dangerous keyword
                }
            }
            if (g == 0 )
            {
                temp.push_back(key[j]);
            }
        }
        if ( l >= threshold)
        {
            if( !(temp.empty()))
            {
                for ( m = 0; m < temp.size(); m++)
                {
                    dangerous.push_back(temp[m]);
                }
            }
            dan = 1;
        }
        if ( dan > 0)
        {
           if ( !(ret.empty()))
           {
               for ( ex = 0; ex < ret.size(); ex++)
               {
                  if ( address[i] == ret[ex])
                  {
                    co++; // counter for ret 
                  }
               }
               if ( co == 0)
               {
                   ret.push_back(address[i]);
               }
           }
           else 
           {
               ret.push_back(address[i]);
           }
           numdan++;
        }
    }
}


if( !(ret.empty()))
{
    return(ret);
}
else
{
    return(ret);
}
}


// Powered by FileEdit
