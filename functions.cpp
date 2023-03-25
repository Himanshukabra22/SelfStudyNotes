#include<iostream>
#include<conio.h>
#include"math.h"
using namespace std;



//https://stackoverflow.com/questions/53534235/finding-modulus-with-very-large-exponentiation-and-divisor-in-c?noredirect=1&lq=1
unsigned long long int modExp1(unsigned long long int base, unsigned long long int expo, unsigned long long int modee)
{
    unsigned long long int out = 1;
    unsigned long long int cnt;
    for (cnt=expo; cnt>0; cnt--)
    {
        out = (out * base) % modee;
    }
    return out;
}

long long powsum(long long int base, long long int exp)
{
    if(exp == 0)
    return 1;
    if(exp&1)
    return base*powsum(base,exp/2)*powsum(base,exp/2);
    else return powsum(base,exp/2)*powsum(base,exp/2);
}

//https://cp-algorithms.com/algebra/binary-exp.html
long long modExp2(long long base, long long expo, long long mod) {
    base %= mod;
    long long res = 1;
    while (expo > 0) {
        if (expo & 1)
            res = res * base % mod;
        base = base * base % mod;
        expo >>= 1;
    }
    return res;
}

long long binToDec(string str, long long n)
{
    long long k = 0;
    for (int i = 0; i < n; i++)
    {
        if( str.at(i) == '1')
        k += pow(2,n-i-1);
    }
    return k;
}

long long power(long long m)
{
    long long count = 0;
    while(m)
    {
        m = m/2;
        count++;
    }
    return count-1;
}

long long fact(long long r)
{
    long long temp = 1;
    if(r==0)
    {
        r=1;
    }
    for(long long i = 1; i <= r; i++)
    {
        temp *= i;
    }
    return temp;
}

long long comb(long long x, long long y)
{
    long long p=0;
    if(x>=y)
    {
        p = (fact(x)/(fact(y)*fact(x-y)));
    }
    return p;
}

long long combsum(long long x)
{
    long long p=0;
    for (long long j = 0; j <= x; j++)
    {
        p += comb(x,j);
    }
    return p;   
}

int main()
{
    cout<<powsum(2,3)<<endl;
    return 0;
}

// min(num1,num2) will return minimum of two numbers.
// max(num1,num2) will return maximum of two numbers.
// llround(float) will return rounded two floating point rounded integer.