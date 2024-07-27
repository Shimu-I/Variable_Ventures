#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class BA {
    public:
        vector<int> beautifulArray(int N) {
            memoizes.clear();
            return f(N);
        }

    private:
        unordered_map<int, vector<int>> memoizes;

        vector<int> f(int N) {
            if (memoizes.find(N) != memoizes.end()) {
                return memoizes[N];
            }

            vector<int> ans(N);

            if (N == 1) {
                ans[0] = 1;
            } else {
                int i = 0;
                vector<int> odds = f((N + 1) / 2);
                    for (int x : odds) {
                        ans[i++] = 2 * x - 1;
                    }

                vector<int> even = f(N / 2);
                    for (int x : even) {
                        ans[i++] = 2 * x;
                    }
                }
        memoizes[N] = ans;
        return ans;
        }
};


int main() {
    BA ba;
    int N;

    cout << "Enter N = ";
    cin >> N;

    vector<int> result = ba.beautifulArray(N);

    cout << "Answer: ";
    for (int num : result) {
        cout << num << " ";
    }
}