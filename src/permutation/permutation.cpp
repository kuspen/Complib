#include "../header.h"

template <typename T>
void permutation(vector<T> vec) {

    do {
        print_vector(vec);
    } while(next_permutation(vec.begin(), vec.end()));

    return;
}
