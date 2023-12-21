#include<iostream>
using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n>>m>> a>> b;
	int total = 0;
	if (a * m > b)  //看特殊票平均价格是否比普通票便宜；若便宜，特殊票越多越好（剩k站）
	{
		int k;
		k = n % m;
		if (k * a < b)  //最后几站，买k张普通票是否比1张特殊票便宜
		{
			total = (n - k) / m * b + k * a;
		}
		else
		{
			total = ((n - k) / m + 1) * b;
		}
	}
	else
	{
		total = n * a;
	}
	cout << total << endl;
	return 0;
}