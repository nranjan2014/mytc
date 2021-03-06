// BEGIN CUT HERE
// PROBLEM STATEMENT
// A web site for movie fans assigns a composite rating to each movie. Your task is to calculate the rating of a particular movie. Users of the site rate the movie on a scale of 0 to 100, inclusive. The lowCount lowest ratings and the highCount highest ratings are thrown away, and the composite rating is the average of the remaining individual ratings.

Given the user ratings in a int[] marks, together with lowCount and highCount, return the rating of the movie.

DEFINITION
Class:MovieRating
Method:calculate
Parameters:int[], int, int
Returns:double
Method signature:double calculate(int[] marks, int lowCount, int highCount)


NOTES
-A return value with either an absolute or relative error of less than 1.0E-9 is considered correct.


CONSTRAINTS
-marks will contain between 1 and 50 elements, inclusive.
-Each element of marks will be between 0 and 100, inclusive.
-lowCount and highCount will be between 0 and 50, inclusive.
-lowCount+highCount will be strictly less than the number of elements in marks.


EXAMPLES

0)
{70, 99, 96, 0, 30}
0
0

Returns: 59.0

With no individual ratings thrown away we should return just (70 + 99 + 96 + 0 + 30) / 5 = 295 / 5 = 59.

1)
{91, 90, 50}
1
1

Returns: 90.0

Here the lowest rating (50) and the highest rating (91) are thrown away, so only one individual rating (90) is left.

2)
{23, 23, 23, 23, 23, 23, 23, 23}
2
3

Returns: 23.0

There can be repeats in marks.

3)
{31, 52, 20, 86, 47, 76, 82, 27, 42, 29}
1
4

Returns: 35.2



4)
{1, 1, 0, 0, 1, 1, 0, 1, 0, 2}
2
2

Returns: 0.6666666666666666



// END CUT HERE
import java.util.*;
public class MovieRating {
	public double calculate(int[] marks, int lowCount, int highCount) {
		
	}
	public static void main(String[] args) {
		MovieRating temp = new MovieRating();
		System.out.println(temp.calculate(int[] marks, int lowCount, int highCount));
	}
}
