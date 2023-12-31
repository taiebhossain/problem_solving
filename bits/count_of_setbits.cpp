#include<bits/stdc++.h>
using namespace std;

void countBits(int* table) {
	table[0] = 0;
	for (int i = 1; i < 256; i++) {
		table[i] = table[i >> 1] + (i & 1);
	}
}
int main()
{
	int table[256];
	countBits(table);
	
	int n;
	cin >> n;
	
	int count = 0;
	
	for (int i = 0; i < 4; i++) {
		count += table[j & 255];
		j = j >> 8;
	}
	cout << count << endl;
	
	return 0;
}

// count set bits with lookup table