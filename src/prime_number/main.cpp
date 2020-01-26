#include "prime_number.cpp"

int main() {

    unsigned long long n;
    cin >> n;

    bool isPrime = prime_number(n);
    if(isPrime) {
        cout << "prime number : " << n << endl;
    }
    else {
        cout << "NOT prime number : " << n << endl;
    }
    return 0;
}