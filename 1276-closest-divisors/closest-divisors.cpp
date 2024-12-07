class Solution {
public:
    vector<int> closestDivisors(int num) {
        vector<int> fact1;
        vector<int> fact2;
        int n1 = num + 1;
        int n2 = num + 2;

        // Finding divisors for num + 1
        for (int i = 1; i * i <= n1; i++) {
            if (n1 % i == 0) {
                fact1.push_back(i);
                if (i != n1 / i) {
                    fact1.push_back(n1 / i);
                }
            }
        }
        sort(fact1.begin(), fact1.end());

        // Finding divisors for num + 2
        for (int i = 1; i * i <= n2; i++) {
            if (n2 % i == 0) {
                fact2.push_back(i);
                if (i != n2 / i) {
                    fact2.push_back(n2 / i);
                }
            }
        }
        sort(fact2.begin(), fact2.end());

        // Using long long to handle large product values
        long long m1 = LLONG_MAX;
        int a1 = -1, b1 = -1;
        for (int i = 0; i < fact1.size(); i++) {
            for (int j = i; j < fact1.size(); j++) {
                long long product = (long long)fact1[i] * fact1[j];
                if (product == num + 1 && abs(fact1[i] - fact1[j]) < m1) {
                    m1 = abs(fact1[i] - fact1[j]);
                    a1 = fact1[i];
                    b1 = fact1[j];
                }
            }
        }

        long long m2 = LLONG_MAX;
        int a2 = -1, b2 = -1;
        for (int i = 0; i < fact2.size(); i++) {
            for (int j = i; j < fact2.size(); j++) {
                long long product = (long long)fact2[i] * fact2[j];
                if (product == num + 2 && abs(fact2[i] - fact2[j]) < m2) {
                    m2 = abs(fact2[i] - fact2[j]);
                    a2 = fact2[i];
                    b2 = fact2[j];
                }
            }
        }

        vector<int> ar1 = {a1, b1};
        vector<int> ar2 = {a2, b2};
        return m1 < m2 ? ar1 : ar2;
    }
};
