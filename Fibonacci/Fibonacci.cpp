#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

/* FIBONACCI NUMBER
   -dynamic programing: memoization using cache vector
   -time efficient, but not space efficient
   -Note: good idea to make helper function if accumulator/cache needed
*/
using namespace std;
int fibHelper(int n, vector<int> cache) {
	if (cache.at(n) > -1) return cache.at(n);
	cache.at(n) = fibHelper(n - 1, cache) + fibHelper(n - 2, cache);
	return cache.at(n);
}
int fib(int n) {
	if (n < 0) return -1;
	if (n == 0) return 0;
	vector<int> cache(n+1, -1);
	cache.at(0) = 0;
	cache.at(1) = 1;

	return fibHelper(n, cache);
}
int main()
{
	cout << fib(5) << endl;
	string n;
	cin >> n;
    return 0;
}

