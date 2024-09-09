#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int binary_search(const std::vector<std::string>& arr, const std::string& x, bool left) {
    int lo = 0, hi = arr.size();
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if ((arr[mid] < x) == left) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    return lo;
}


int find_prefix(const std::vector<std::string>& dictionary, const std::string& prefix, int k) {
    std::string next_prefix = prefix;
    if (!next_prefix.empty()) {
        next_prefix.back()++;
    }
    
    int start = binary_search(dictionary, prefix, true);
    int end = binary_search(dictionary, next_prefix, true);

    if (start + k - 1 < end && dictionary[start + k - 1].find(prefix) == 0) {
        return start + k;
    }
    return -1;
}

int main() {
    int N, Q;
    std::cin >> N >> Q;
    std::cin.ignore();  

    std::vector<std::string> dictionary(N);
    for (int i = 0; i < N; ++i) {
        std::getline(std::cin, dictionary[i]);
    }


    std::sort(dictionary.begin(), dictionary.end());

    for (int i = 0; i < Q; ++i) {
        int k;
        std::string p;
        std::cin >> k >> p;
        std::cin.ignore();  

        int result = find_prefix(dictionary, p, k);
        std::cout << result << std::endl;
    }

    return 0;
}
