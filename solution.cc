// 69. sqrt(x) without built-in exponent function or operator, Newton-Raphson implementation
// 0 ms runtime

class Solution {
public:
    static constexpr int mySqrt(int x)
    {
    if(x<=1)
    {
        return x;
    }

    double n = x;
    double root{};
    int count = 0;

    while (true)
    {
        count++;

        root = 0.5 * (n + (x / n));

        if (abs(root - n) < 0.1)
        {
            break;
        }

        n = root;
    }

    return root;
    }
};
