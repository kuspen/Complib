#include "../header.h"

unsigned long long gcd(unsigned long long m, unsigned long long n) {
    unsigned long long temp;
    if(m<n) {
//        temp = m;
//        m = n;
//        n = temp;
        swap(m,n);
    }
    
    unsigned long long r;
    while((r = m % n) != 0) {
        m = n;
        n = r;
    }
    
    return n;
}

unsigned long long lcm(unsigned long long x, unsigned long long y) {
    return x / gcd(x, y) * y;
}