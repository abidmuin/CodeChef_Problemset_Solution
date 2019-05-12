//https://www.codechef.com/problems/INTEST

// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)

#include <bits/stdc++.h>

using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, test, counter=0;  //n=lines, test=test cases
	scanf("%d %d", &n,&k);

	for (int i=0; i<n; i++) {
		scanf("%d", &test);
		if (test % k == 0)
			counter++;
	}

	cout << counter<< endl;

	return 0;
}
