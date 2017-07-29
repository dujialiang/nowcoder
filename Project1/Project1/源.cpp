#include <iostream>
using namespace std;
int main() {
	int N;
	while (cin >> N) {
		long long int* data = new long long int[N];
		for (int i = 0; i<N; i++)
			cin >> data[i];

		int count = 1;
		long long int last = data[0], next;
		for (int i = 1; i<N - 1; i++) {
			if (data[i] == last)
				continue;
			int j = i + 1;
			next = data[j];
			for (; next == data[i] && j<N; j++) {
				next = data[j];
			}
			if ((data[i] - last)*(data[i] - next)>0) {
				last = next;
				i = j;
				count++;
			}


		}
		cout << count << endl;
		delete[]data;
		data = nullptr;
	}


	return 0;
}