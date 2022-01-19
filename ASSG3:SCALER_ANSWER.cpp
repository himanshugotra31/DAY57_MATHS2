// Q3. Delete Elements


// Problem Description

// Given an integer array A of size N.
// Find the minimum number of elements that need to be removed such that the GCD of the resulting array becomes 1.

// If not possible then return -1.



// Problem Constraints

//     1 <= N <= 100000
//     1 <= A[i] <= 1e9



// Input Format

// Input contains a single integer array A



// Output Format

// Return an integer


// Example Input

// Input 1:

//  A = [7, 2, 5]



// Example Output

// Output 1:

//  0



// Example Explanation

// Explanation 1:

//  GCD of the array A is 1.
//  so, the number of elements to be removed is 0.



//  ..............................................................................................

// SOLUTION APPROACH:

//  Try to remove any element from the aray and find the gcd of the new array.
// GCD will always increase by removing elements.

// Initially if gcd is not equal to one then it is not possible to make the gcd = 1.

// ..................................................................................................





int Solution::solve(vector<int> &A) {
    int gcd = 0;
    for(int i = 0; i < A.size(); i++){
        gcd = __gcd(A[i], gcd);
    }
    
    if(gcd == 1) return 0;
    else return -1;
}

