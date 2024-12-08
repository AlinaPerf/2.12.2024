
#include <iostream>
#include <cmath>
#include <vector>


int main()
{
	int n;
	std::cout << "n = ";
	std::cin >> n;
	std::vector<bool>a(n + 1, true);
	int i = 2;
	int p = 0;
	while (i < n)
	{
		if (a[i])
		{
			p = i * i;
			if (p > n)
				break;
			while (p <= n)
			{
				a[p] = false;
				p += i;
			}
		}
		i++;
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i])
			std::cout << i << ":" << a[i] << '\n';
	}

	std::cin.get();
	std::cin.get();


}

