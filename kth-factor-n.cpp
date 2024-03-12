class Solution {
public:
    int kthFactor(int n, int k) {        
        set<int> factors;

        factors.insert(1);
        factors.insert(n);
        for(int i = 2; i < sqrt(n) + 1; i++)
        {
            if(n % i != 0)
            {
                continue;
            }

            factors.insert(i);
            factors.insert(n / i);
        }

        if(k > factors.size())
        {
            return -1;
        }

        set<int>::iterator it = factors.begin();
        advance(it, k-1);

        return *it;
    }
};
