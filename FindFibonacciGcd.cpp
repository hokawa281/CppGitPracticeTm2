#include "pch.h"
#include "FindFibonacciGcd.h"

/* ここにFindFibonacciGcd.hで定義した関数を実装する　*/

uint32_t gcd(uint32_t a, uint32_t b)
{
    int r;

    if (a == 0 || b == 0)  // 引数チェック
    {
        fprintf(stderr, "引数エラーです。\n");
        return 0;
    }

    // ユーグリッドの互除法
    while ((r = a % b) != 0)  // yで割り切れるまでループ
    {
        a = b;
        b = r;
    }
    return b;
}

int fib(int n)
{
    if (n <= 1) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}


uint32_t fibonacci(uint32_t n)
{
    uint32_t ret;

    ret = fib(n);

    return ret;
}

uint32_t findFibonacciGcd(uint32_t a, uint32_t b)
{
    uint32_t aa;
    uint32_t bb;
    uint32_t cc;
    uint32_t dd;
    uint32_t ret;

    aa = fibonacci(a);
    bb = fibonacci(b);
    
    cc = gcd(aa, bb);

    if (cc == 1)
        return 1;

    dd = 0;
    while (1)
    {
        if(fibonacci(dd) == cc)
            break;

        dd++;
    }

    return dd;
}