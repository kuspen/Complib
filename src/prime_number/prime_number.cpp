#include "../header.h"

bool prime_number(unsigned long long n) {
    
    if(n == 2) {
        return true;
    }
    else if(n % 2 == 0 || n < 2) {
        return false;
    }
    else {
        for(int i = 3; i < sqrt(n); i++) {
            if(n % i == 0) {
                return false;
            }
        }
    }
    return true;
}
