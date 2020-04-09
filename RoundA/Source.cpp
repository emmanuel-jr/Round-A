#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;


int main()
{
	int test;
	cin >> test;

	assert(test > 0 && test <= 100);

	for (int c = 0; c < test; c++)
	{
		
		int n;
		cin >> n;

		int budget;
		
		cin >> budget;
		assert(budget > 0 && budget <= 100000);

		int* array = new int[n];
		
		for (int i = 0; i < n; i++)
		{
			cin >> array[i];

			assert(array[i] <= 1000 && array[i] > 0);
		}

		sort(array, array + n);

		int sum = 0, count = 0;

		for (int i = 0; i < n && sum < budget; i++)
		{
			sum += array[i];
			
			if (sum <= budget)
			count++;
		}

		cout << "Case #" << c + 1 << ": " << count << endl;

	}

	return 0;
}