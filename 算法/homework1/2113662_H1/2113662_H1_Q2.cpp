#include<iostream>
using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n>>m>> a>> b;
	int total = 0;
	if (a * m > b)  //������Ʊƽ���۸��Ƿ����ͨƱ���ˣ������ˣ�����ƱԽ��Խ�ã�ʣkվ��
	{
		int k;
		k = n % m;
		if (k * a < b)  //���վ����k����ͨƱ�Ƿ��1������Ʊ����
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