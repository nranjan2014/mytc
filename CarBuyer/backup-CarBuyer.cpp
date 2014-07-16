// BEGIN CUT HERE
// PROBLEM STATEMENT
// You wish to buy a new car and would like to get the cheapest option available. However, you recognize that the initial purchase cost is only a part of what you will need to spend on the car and you want to factor tax and fuel costs into your decision. You will be given a vector <string> cars giving the specifications of various models of car and an int annualDistance containing the distance that you will drive each year. For the car that you choose, the purchase cost only has to be paid once, the tax cost specific to the model has to be paid once per year and the fuel cost should be calculated as FUEL PRICE * DISTANCE DRIVEN / FUEL EFFICIENCY, where the fuel efficiency is specific to the car. You should calculate which car model in cars has the lowest cost on aggregate after years amount of time and return a double containing this cost.
Each element of cars will be formatted "<PURCHASE COST> <TAX> <FUEL EFFICIENCY>" (quotes for clarity).

DEFINITION
Class:CarBuyer
Method:lowestCost
Parameters:vector <string>, int, int, int
Returns:double
Method signature:double lowestCost(vector <string> cars, int fuelPrice, int annualDistance, int years)


NOTES
-The return value must be accurate to within an absolute or relative tolerance of 1e-9.


CONSTRAINTS
-cars will contain between 1 and 50 elements, inclusive.
-Each element of cars will contain between 5 and 15 characters, inclusive.
-Each element of cars will be formatted "<PURCHASE COST> <TAX> <FUEL EFFICIENCY>".
-Each <PURCHASE COST> will be an integer, without leading zeros, between 1 and 100000, inclusive.
-Each <TAX> will be an integer, without leading zeros, between 1 and 1000, inclusive.
-Each <FUEL EFFICIENCY> will be an integer, without leading zeros, between 1 and 100, inclusive.
-fuelPrice will be between 1 and 100, inclusive.
-annualDistance will be between 1 and 100000, inclusive.
-years will be between 1 and 100, inclusive.


EXAMPLES

0)
{"10000 50 50","12000 500 10","15000 100 65","20000 20 80","25000 10 90"}
2
5000
2

Returns: 10500.0

Here, fuel is cheap, you have a low annual mileage and you don't want to keep the car very long, so you go with the first model, which has the lowest purchase cost.

1)
{"10000 50 50","12000 500 10","15000 100 65","20000 20 80","25000 10 90"}
8
25000
10

Returns: 45200.0

This is the same set of cars, but this time fuel is far more expensive and you're going to keep the car for longer and drive it further. Now the more fuel-efficient fourth model is the cheapest.

2)
{"8426 774 19","29709 325 31","30783 853 68","20796 781 3"
,"27726 4 81","20788 369 69","17554 359 34","12039 502 24"
,"6264 230 69","14151 420 65","25115 528 70","22234 719 55"
,"2050 926 40","18618 714 29","173 358 57"}
33
8673
64

Returns: 254122.44444444444



// END CUT HERE
#line 67 "CarBuyer.cpp"
#include <string>
#include <vector>
class CarBuyer {
	public:
	double lowestCost(vector <string> cars, int fuelPrice, int annualDistance, int years) {
		
	}
};
