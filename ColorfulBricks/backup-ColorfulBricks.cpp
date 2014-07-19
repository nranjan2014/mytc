// BEGIN CUT HERE
// PROBLEM STATEMENT
// Beaver Bindu has some colored bricks.
Each color is described by an uppercase letter.
Bricks of each color all look exactly the same.
You are given a string bricks.
Each character of bricks represents the color of one of Bindu's bricks.



Bindu wants to arrange all her bricks into a row.
A row of bricks is nice if there is at most one pair of adjacent bricks which have different colors.


Return the number of ways in which Bindu can form a nice row, using all her bricks.
(Two ways are considered identical if they correspond to the same sequence of brick colors.)




DEFINITION
Class:ColorfulBricks
Method:countLayouts
Parameters:string
Returns:int
Method signature:int countLayouts(string bricks)


CONSTRAINTS
-bricks will contain between 1 and 50 characters, inclusive.
-Each character of bricks will be an uppercase letter ('A'-'Z').


EXAMPLES

0)
"ABAB"

Returns: 2

There are six possible ways to arrange all the bricks into a row: "AABB", "ABAB", "ABBA", "BAAB", "BABA" and "BBAA". Out of these, only "AABB" and "BBAA" have at most one pair of adjacent bricks with different colors.

1)
"AAA"

Returns: 1

In this test case, all bricks have the same color. Hence, there is only one way to arrange them into a row. That row is nice, because it has no adjacent bricks of different colors.

2)
"WXYZ"

Returns: 0

Since all four bricks are of different colors, the bricks at positions 0 and 1 will have different colors. Similarly, the bricks at positions 1 and 2 will also have different colors. Hence, no matter how the bricks are arranged in a row, the row will not be nice.

// END CUT HERE
#line 59 "ColorfulBricks.cpp"
#include <string>
#include <vector>
class ColorfulBricks {
	public:
	int countLayouts(string bricks) {
		
	}
};
