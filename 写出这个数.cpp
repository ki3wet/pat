#include<iostream>

int* GetIntergeList(int n);
void PrintChange(int p);
void PrintContent(int num);

int main()
{
	int* num = NULL;
	int sum = 0;
	unsigned long long int a = 1234567890987654321123456789;
	num = GetIntergeList(a);
	for (int i = 0; i < 100; i++)
	{
		sum += num[i];
	}
	PrintContent(sum);
	return 0;
}
void PrintContent(int num)
{
	int arr[4] = { 0 };
	int* p = NULL;
	p = GetIntergeList(num);
	for (int i = 0; i <= 3; i++)
	{
		arr[i] = p[3 - i];
	}
	if (arr[0] != 0 )
	{
		PrintChange(arr[0]);
		std::cout << " ";
		PrintChange(arr[1]);
		std::cout << " ";
		PrintChange(arr[2]);
		std::cout << " ";
		PrintChange(arr[3]);
	}
	else if(arr[0] == 0 && arr[1] != 0)
	{
		PrintChange(arr[1]);
		std::cout << " ";
		PrintChange(arr[2]);
		std::cout << " ";
		PrintChange(arr[3]);
	}
	else if (arr[0] == 0 && arr[1] == 0 && arr[2] !=0)
	{
		PrintChange(arr[2]);
		std::cout << " ";
		PrintChange(arr[3]);
	}
	else if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0 && arr[3] != 0)
	{
		PrintChange(arr[3]);
	}
}
int* GetIntergeList(int n)
{
	int list[100] = { 0 };
	int number = 0;
	int j = 0;
	while (n != 0)
	{
		number = n % 10;
		n = n / 10;
		list[j] = number;
		++j;
	}
	return list;
}

void PrintChange(int p)
{
	using namespace std;
	switch (p)
	{
	case 0:
		cout << "ling";
		break;
	case 1:
		cout << "yi";
		break;
	case 2:
		cout << "er";
		break;
	case 3:
		cout << "san";
		break;
	case 4:
		cout << "si";
		break;
	case 5:
		cout << "wu";
		break;
	case 6:
		cout << "liu";
		break;
	case 7:
		cout << "qi";
		break;
	case 8:
		cout << "ba";
		break;
	case 9:
		cout << "jiu";
		break;
	default:
		break;
	}
}

