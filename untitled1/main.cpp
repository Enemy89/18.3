#include <iostream>

void evenNumbers(long long n, int &ans) {
    if(n == 0) {
        return;
    }
    if(n % 10 % 2 == 0) {
        ans++;
    }
    evenNumbers(n / 10, ans);
}

int main() {
    long long n = 9223372036854775806;
    int ans = 0;
    evenNumbers(n, ans);

    std::cout << "ans = " << ans << std::endl;
}