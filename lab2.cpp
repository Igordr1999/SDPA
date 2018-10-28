#include <iostream>
using namespace std;

int main() {
	int n, a[100] = { 0 };
	bool a_mask[100];

	// Input array
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	// Fill with default value
	for (int i = 0; i < n; i++) a_mask[i] = true;

	// Mark the elements to be deleted in a_mask
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if ((a[i]/10 == a[j]/10) && 
				(a[i]%10 == a[j]%10)){
				a_mask[i] = false;
				a_mask[j] = false;
			}
		}
	}

	// Rewriting items
	int border = 0;
	for (int i = 0; i < n; i++) {
		if (a_mask[i]) {
			a[border] = a[i];
			border++;
		}
	}

	// Update the size of the array
	n = border;
	
	// Output array
	for (int i = 0; i < n; i++) cout << a[i]<<" ";
	return 0;
}