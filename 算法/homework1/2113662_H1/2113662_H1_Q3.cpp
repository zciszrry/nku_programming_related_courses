#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count;
	if (n >= 0)    //�˻��Ƿ�Ϊ��
	{
		count = n;
	}
	else
	{
		n *= -1;       //Ϊ����ȡ����ֵ���Ƚ�ɾ���������ԽСԽ�ã���*��-1��
		int g = n % 10;//��λ
		int s = n / 10 % 10;//ʮλ
		int dg = (n - g) / 10;
		int ds = (n - g - 10 * s) / 10 + g;
		if (dg < ds)//ԽСԽ��
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