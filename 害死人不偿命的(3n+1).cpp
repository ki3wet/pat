/*
*对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把 (3n+1) 砍掉一半。
*对给定的任一不超过 1000 的正整数 n，简单地数一下，需要多少步（砍几下）才能得到 n=1
*/
#include <iostream>



int main()
{
    int n=0;
    int i=0;
    std::cin >> n;
    for(i=0; n!=1; i++)
    {
        if (n&1)
        {
            n = (3*n+1)/2;
        }else
        {
            /* code */
            n /= 2;
        }
    }
    std::cout << i << std::endl;
    return 0;
}