#include <iostream>

using namespace std;
//��������� �������
int FindID(int, char);//����� id ������� � ASCII
int TakeChar(string, int); //�������� ���������� �������� �������
void ConvertToTen(string num, int i, int j=0, int res=0);//������������ ����� � ��������� ������� ��������

int main()
{
	string num;
	cout << "Enter number in 16: ";
	cin >> num;//��������� ����� � �������������� ������
	cout << "\nYour number in 16 is " << num << endl;
	
	int i = num.size() - 1;//����� ������� � ���� ��� ������ ����������� ��������
	ConvertToTen(num, i);
}

int FindID(int start, char ch1)
{
	int count;
	(start == 65) ? (count = 10) : (count = 0);
	while (int(ch1)!=start)
	{
		start++;
		count++;
	}
	return count;
}


int TakeChar(string num, int j) 
{
	char ch1 = num[j];
	int char_found;
	if (48 <= int(ch1) && int(ch1) <= 57)
	{
		char_found = FindID(48, ch1);
    }
	
	else if (65 <= int(ch1) && int(ch1) <= 70)
	{
		char_found = FindID(65, ch1);
		
	}
	return char_found;

}

void ConvertToTen(string num, int i, int j, int res)
{
	
	if (i == (-1)) //������ �������, ���� ������� ������� � ���� ����������
	{
		cout << "Your number in 10 is " << res;
		return;
	}
	int ch;
	ch=TakeChar(num, j);
	res += ch*pow(16, i);
	num[j] = char(32);
	ConvertToTen(num, --i, ++j, res);
	
}