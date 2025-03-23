#include <iostream>
#include <vector>
using namespace std;
long long fibonacci(int n, vector<long long>& fibok) {
    if (n <= 0) return 0;
    else if (n == 1) return 0;
    else if (n == 2) return 1;
    fibok[n] = fibonacci(n - 1, fibok) + fibonacci(n - 2, fibok);
    return fibok[n];
}

int main() {
    int n;
    cin >> n;
    vector<long long> fibok(n + 1, -1);
    for( int i = 1; i <= n; i++){
	long long result = fibonacci(i, fibok);
    	cout << result << endl;
    }
    return 0;

}
