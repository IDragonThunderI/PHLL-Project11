#include <iostream>
#include <string>
using namespace std;

void main()
{
	// ������� ����� � �++. ������ ���� string
	// ����� ������ � ������� �����

	// 1. ���������� ����������
	string* AS; // ������ �����
	int count; // ����������� ��������� � �������
	string s; // ������� ������
	char buf[80]; // ����� ��� ����� �����

	// 2. ������ ���������� ��������� � �������
	cout << "count = ";
	cin >> count;

	// 3. ��������, ��������� �� �������� count
	if (count <= 0)
	{
		cout << "Incorrect input.";
		return;
	}

	// 4. �������� ������ ��� count �����
	AS = new string[count];

	// 5. ���� ����� ����� � ������
	cout << "Enter strings:\n";
	cin.ignore(4096, '\n');

	for (int i = 0; i < count; i++)
	{
		// ������ �������� � ���������
		cout << "=> ";
		cin.getline(buf, 80, '\n');
		AS[i] = buf; // ����������� ������
	}

	// 6. ����� ��������� ������� ��� ��������
	cout << "\nArray AS:" << endl;
	for (int i = 0; i < count; i++)
		cout << "AS[" << i << "] = " << AS[i] << endl;

	// 7. ���� ������� ������
	cout << endl << "Enter string:" << endl;
	cin.getline(buf, 80, '\n');
	s = buf; // � ���������� s - �������� ������

	// 8. ����� ������ s � ������� AS
	bool f_is = false;
	for (int i = 0; i < count; i++)
		if (s == AS[i])
		{
			// ���� ������ �������,
			f_is = true;
			break; // �� ����� �� �����
		}

	// 9. ����� ����������
	if (f_is)
		cout << "String \"" << s << "\" is in the array AS." << endl;
	else
		cout << "String \"" << s << "\" is not in the array AS." << endl;

	// 10. ������������ ������, ���������� ��� ������� AS
	delete[] AS;
}
