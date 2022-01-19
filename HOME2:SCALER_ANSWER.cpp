// Lucky Numbers

// Problem Description

// A lucky number is a number which has exactly 2 distinct prime divisors.

// You are given a number A and you need to determine the count of lucky numbers between the range 1 to A (both inclusive).



// Problem Constraints

// 1 <= A <= 50000


// Input Format

// The first and only argument is an integer A.


// Output Format

// Return an integer i.e the count of lucky numbers between 1 and A, both inclusive.


// Example Input

// Input 1:

//  A = 8

// Input 2:

//  A = 12



// Example Output

// Output 1:

//  1

// Output 2:

//  3



// Example Explanation

// Explanation 1:

//  Between [1, 8] there is only 1 lucky number i.e 6.
//  6 has 2 distinct prime factors i.e 2 and 3.

// Explanation 2:

//  Between [1, 12] there are 3 lucky number: 6, 10 and 12.

//  ..................................................................................

//  Solution Approach

// Firstly, create an array let’s say isprime where isprime[i] denotes true or false if number i is prime or not.

// Now, for every number in the range [1, A] calculate the number of prime divisors and if the count of distinct prime factors for a number is 2 increment the answer.

// This can be easily done in O(N * sqrt(N)).

// The solution can further be optimised to run in O(N * log(N)). The idea is to use sieve and in place of marking a number non prime
// in the array while using sieve just add 1 to it for each prime you iterate. At the end you will have number of prime factors of each
// number. Then the rest is cake walk. There are other kinds of sieves as well that you should check out. These are quite fast in
// terms of processing.

// Link to a blog of sieves :- https://codeforces.com/blog/entry/22229

// .............................................................................................................


bool isprime[50001];

void sieve(){
    // Sieve of Eranthoses
    memset(isprime , true , sizeof(isprime));
    isprime[1] = false;
    for(long long i = 2 ; i <= 50000 ; i++)
    {
        if(isprime[i])
        {
            for(long long j = i * i ; j <= 50000 ; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

int Solution::solve(int A) {
    sieve();
    int cnt[50001];
    memset(cnt,0,sizeof(cnt));
    
    for(int i = 1 ; i <= A ; i++)
    {
        for(int j = 1 ; j*j <= i ; j++)
        {
            // Check to increment count of distinct primes
            if(i%j == 0){
                if(isprime[j]){
                    cnt[i]++;
                }
                if((i/j) != j && isprime[i/j]){
                    cnt[i]++;
                }
            }
                
        }
    }
    int ans = 0;
    for(int i = 1 ; i <= A ; i++)
    {
        if(cnt[i] == 2)               // Increment count for every lucky num
        {
            ans++;
        }
    }
    return ans;
}