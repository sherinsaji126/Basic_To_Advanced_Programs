//Pascal’s Triangle using Dynamic Programming:
/*
 1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1
 1 6 15 20 15 6 1
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	
    int n=5;
    int m=5;
    //create a vector containing " n" vectors each of size "m" 
 	vector<vector<int>>arr(n,vector<int>(m));
// Iterate through every line and 
	// print integer(s) in it
	for (int line = 0; line < n; line++)
	{
		// Every line has number of integers 
		// equal to line number
		for (int i = 0; i <= line; i++)
		{
		// First and last values in every row are 1
		if (line == i || i == 0)
			arr[line][i] = 1;
		
		// Other values are sum of values just 
		// above and left of above
		else
			arr[line][i] = arr[line - 1][i - 1] + 
							arr[line - 1][i];
		cout << arr[line][i] << " ";
		}
		cout <<endl;
	}
    return 0;
}
