# 69. sqrt(x)
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well. You must not use any built-in exponent function or operator.

- Newton-Raphson implementation, 0 ms runtime


# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Since it is a mathematical function I first thought about the famous Newton Raphson iteration of Quakes inverse square root.

# Approach
<!-- Describe your approach to solving the problem. -->
I looked up a application of the Newton Raphson square root and fitted it for the problem.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(Log(n))

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(1)

# Code
```cpp []
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
```