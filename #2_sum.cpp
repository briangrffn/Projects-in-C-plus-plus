//#2 - Project | Sunday, May 21, 2023
#include <iostream>


using namespace std;

int main() {

    int n;
    int sum{0};
    cout << "Enter number:";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum+=i;
        cout << i << " ";

    }
    cout << "\nSum: " << sum << "\n";

    return 0;
}
