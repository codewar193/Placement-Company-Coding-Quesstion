// C++ code to demonstrate Circular Permutation
#include <bits/stdc++.h>
using namespace std;

// Function to find no. of permutations
int Circular(int n)
{

	int Result = 1;

	while (n > 0) {
		Result = Result * n;
		n--;
	}

	return Result;
}

// Driver Code
int main()
{
	int n = 4;

	cout << Circular(n - 1);
}
