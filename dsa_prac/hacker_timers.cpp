#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> arr(N);
    // input
    for (int i = 0; i < N; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    multiset<int> ms;
    sort(arr.begin(), arr.end());
    int i = 0;
    int st = -1;
    int ans = 0;
    while (1) {
        while (i < N && arr[i].first <= st) {
            ms.insert(arr[i].second);
            i++;
        }
        if (ms.empty()) {
            if (i >= N) {
                break;
            }
            st = arr[i].first;
            ms.insert(arr[i].second);
            i++;
        } else {
            ms.erase(ms.begin());
            st++;
            while (ms.size() && (*ms.begin()) < st) {
                ms.erase(ms.begin());
            }
            ans++;
        }
    }
    cout << ans << "\n";
}