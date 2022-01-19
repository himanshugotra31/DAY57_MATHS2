// Arranging Marbles


// Problem Description

// A child has A marbles in his hand

// He arranges them in a row-wise pattern.

// First row contains 1 marbles, Second row contains 2 marbles and so on.

// What number of marbles are present in the last row, assuming the child uses all his marbles, even if the last row is incomplete?



// Problem Constraints

// 1 <= A <= 109


// Input Format

// First and only argument is the integer A


// Output Format

// Return an integer, the answer to the problem


// Example Input

// Input 1:

// A = 6

// Input 2:

// A = 8



// Example Output

// Output 1:

// 3

// Output 2:

// 2



// Example Explanation

// Explanation 1:

// 3 complete rows will be formed and last row has 3 marbles.

// Explanation 2:

// 3 complete rows will be formed and 4th row is incomplete and has 2 marbles.


// .........................................................................................................
// Solution Approach

// We see that either the last row is completely full, in this case
// answer is the row number.
// Or it is partially full, in which case, answer is equal to
// row number - marbles left. Now try to figure out how to calculate marbles left on your own.

// ........................................................................................................


int Solution::solve(int A) {
    int n=A;
    int lo=1;
    int hi=52000;
    int mid,ans;
    ans = -1;
    while(lo<=hi)
    {   mid=((hi+lo)/2);
        int x=(mid*(mid+1))/2;
        if(x>=n)
        {
            ans=mid;
            hi=mid-1;
        }
        else
            lo=mid+1;
    }
    int tot=(ans*(ans+1))/2;
    //trace(ans);
    if(tot == n)
        return ans;
    else
        return (ans-(tot - n));
}
