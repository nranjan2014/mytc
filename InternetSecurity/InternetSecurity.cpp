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
    SVec ini;
    string s;
    int count;
    count =0;
    l =0;
    int g =0;
    istringstream ss;
    int dan;
    int bad = 1;
    int good = 1;
    while ( (good != 0) && (bad != 0))
    {
       
       cout << "in while: " << g << endl; 
        g++;
        bad = 0;
        good = 1;
            for ( i = 0; i < address.size(); i++)
            {
                key.clear();
                temp.clear();
                l = 0;
                ss.clear();
                ss.str(keyword[i]);
                while( ss >> s)
                {
                    key.push_back(s);    
                    ss.clear();
                }
                for ( j = 0; j < key.size(); j++)
                {
                    for ( k = 0; k < dangerous.size(); k++)
                    {
                        if ( key[j] == dangerous[k])
                        {
                            l++;
                        }
                        else
                        {
                            if( !(temp.empty()))
                            {
                                count = 0;
                                for ( n =0; n < temp.size(); n++)
                                {
                                    if ( key[j] == temp[n])
                                    {
                                        count++;
                                    }
                                }
                                if ( count == 0)
                                {
                                    temp.push_back(key[j]);
                                }
                            }
                            else
                            {
                                temp.push_back(key[j]);
                            }
                        }
                    }
                    }
                    if ( l >= threshold)
                    {
                      if ( !(ret.empty()))
                      {
                       for ( w = 0; w < ret.size(); w++)
                       {
                          if ( address[i] != ret[w])
                          {
                            ter++;
                          }
                        }
                        if ( ter > 0)
                        {
                        if( !(temp.empty()))
                        {
                            for ( m = 0; m < temp.size(); m++)
                            {
                                dangerous.push_back(temp[m]);
                            }
                        }
                        cout << "web: " << address[i] << endl;
                        ret.push_back(address[i]);
                        bad = 1;
                       }
                       }
                      }
                    }
                    else
                    {
                      good = 0;    
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
