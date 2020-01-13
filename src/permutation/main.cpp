#include "permutation.cpp"

int main() {

    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    permutation(vec);

    return 0;
}