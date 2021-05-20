#include <iostream>
using namespace std;

bool keyInSegment(int* arr, int n, int x, int k) {
    for (int i=0; i<n; i+=k) {
		int keyCount = 0;
        for (int j=i; j<i+k && j<n; j++) 
            if (arr[j] == x)
                keyCount++;
		if (keyCount == 0)
			return false;
    }
    return true;
}

int main() {
	int n, x, k;
	cin >> n >> x >> k;
	int arr[n];
	for (int i=0; i<n; i++)
	    cin >> arr[i];
	cout << boolalpha << keyInSegment(arr, n, x, k);
}   