#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <set>
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


class CarBuyer {
  public:
    double lowestCost(vector <string> cars, int fuelPrice, int annualDistance, int years);
};

double CarBuyer::lowestCost(vector <string> cars, int fuelPrice, int annualDistance, int years)
{
    int i;
    istringstream ss;
    double price, tax, eff, total;
     vector < double > sum;
        total = 0;
    for ( i =0; i < cars.size(); i++ )
    {
        ss.clear();
        ss.str(cars[i]);
        ss >> price >> tax >> eff;

       total = price + ( tax * years) + ( (years * fuelPrice * annualDistance) / eff);
        sum.push_back(total);
    }
    sort(sum.begin(), sum.end());

    return (sum[0]);
}
