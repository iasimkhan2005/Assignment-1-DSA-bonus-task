#include<iostream>
#include<array>
#include<stack>

using namespace std;

int main() {
	int arr[] = {4, 5, 2, 25};
	const int arrSize = 4;
	int result[arrSize];
	stack<int> s;
	cout << "Input: [4,5,2,25] " << endl;
	for (int i = arrSize - 1; i >= 0 ; i--)
	{
		if (s.empty()) {
			s.push(arr[i]);
			result[i] = -1;
		}
		else if (!s.empty() && arr[i] < s.top() )
		{
			result[i] = s.top();
			s.push(arr[i]);
		}
		else
		{
			while (arr[i] > s.top())
			{
				s.pop();
			}
			result[i] = s.top();
			s.push(arr[i]);
		}
		
	}
	cout << "Output:[";
	for (int i = 0; i < arrSize; i++)
	{
		cout << result[i] <<" ,";
	}
	cout << "]" << endl;
}

