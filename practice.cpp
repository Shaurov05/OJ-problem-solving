/// C++ program to print print all primes smaller than
/// n using segmented sieve
#include <bits/stdc++.h>
using namespace std;

/// This functions finds all primes smaller than 'limit'
/// using simple sieve of eratosthenes. It also stores
/// found primes in vector prime[]
void simpleSieve(int limit, vector<int> &prime)
{
    /// Create a boolean array "mark[0..n-1]" and initialize
    /// all entries of it as true. A value in mark[p] will
    /// finally be false if 'p' is Not a prime, else true.
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));

    for (int p=2; p*p<limit; p++)
    {
        /// If p is not changed, then it is a prime
        if (mark[p] == true)
        {
            /// Update all multiples of p
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }

    /// Print all prime numbers and store them in prime
    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            cout << p << "  ";
        }
    }
}

/// Prints all prime numbers smaller than 'n'
void segmentedSieve(int n)
{
    int limit = floor(sqrt(n))+1;
    vector<int> prime;
    simpleSieve(limit, prime);

    int low  = limit;
    int high = 2*limit;

    while (low < n)
    {
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));

        for (int i = 0; i < prime.size(); i++)
        {
            int loLim = floor(low/prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];

            for (int j=loLim; j<high; j+=prime[i])
                mark[j-low] = false;
        }
        for (int i = low; i<high; i++)
            if (mark[i - low] == true)
                cout << i << "  ";

        low  = low + limit;
        high = high + limit;
        if (high >= n) high = n;
    }
}

int main()
{
    int n = 100000000;
    cout << "Primes smaller than " << n << ":n";
    segmentedSieve(n);
    return 0;
}
