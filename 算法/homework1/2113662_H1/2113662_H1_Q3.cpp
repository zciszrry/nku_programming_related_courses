#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count;
	if (n >= 0)    //账户是否为正
	{
		count = n;
	}
	else
	{
		n *= -1;       //为负先取绝对值，比较删后的两数，越小越好，再*（-1）
		int g = n % 10;//个位
		int s = n / 10 % 10;//十位
		int dg = (n - g) / 10;
		int ds = (n - g - 10 * s) / 10 + g;
		if (dg < ds)//越小越好
		{
			count = dg*-1;
		}
		else
		{
			count = ds*-1;
		}
	}
	cout << count << endl; 
	return 0;
}