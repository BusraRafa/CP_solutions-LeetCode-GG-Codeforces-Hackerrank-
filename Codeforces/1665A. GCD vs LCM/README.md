**Problem:**

You are given a positive integer 'n'. You have to find 4 positive integers 'a', 'b', 'c', and 'd' such that:

* a + b + c + d = n
* gcd(a, b) = lcm(c, d)

If there are several possible answers you can output any of them. It is possible to show that the answer always exists.

In this problem gcd(a, b) denotes the greatest common divisor of 'a' and 'b', and lcm(c, d) denotes the least common multiple of 'c' and 'd'.

**Input**

The input consists of multiple test cases. The first line contains a single integer 't' (1 ≤ t ≤ 10^4) — the number of test cases. Description of the test cases follows.

Each test case contains a single line with integer 'n' (4 ≤ n ≤ 10^9) — the sum of 'a', 'b', 'c', and 'd'.

**Output**

For each test case output 4 positive integers 'a', 'b', 'c', and 'd' such that a+b+c+d=n and gcd(a, b) = lcm(c, d).

**Example**

**Input**

5
4
7
8
9
10

**Output**

1 1 1 1
2 2 2 1
2 2 2 2
2 4 2 1
3 5 1 1

**Note**

In the first test case gcd(1,1)=lcm(1,1)=1, 1+1+1+1=4.

In the second test case gcd(2,2)=lcm(2,1)=2, 2+2+2+1=7.

In the third test case gcd(2,2)=lcm(2,2)=2, 2+2+2+2=8.

In the fourth test case gcd(2,4)=lcm(2,1)=2, 2+4+2+1=9.

In the fifth test case gcd(3,5)=lcm(1,1)=1, 3+5+1+1=10.

