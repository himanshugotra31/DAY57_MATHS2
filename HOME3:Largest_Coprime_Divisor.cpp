int Solution::cpFact(int A, int B)
{    
    while (__gcd(A, B) != 1) 
    {
        A=A/__gcd(A, B);
    }
    return A;
}


//refer page 6-7 of notebook 3
//T.C. for this code: O(log(max(A,B))* log A)



/*STACK OVERFLOW EXPLANANTION

When you divide A by the greatest common denominator of A and B, then you obtain a new value A1 that has all the same denominators as A, except for this one (see explanation at bottom).

At the same time, A1 divides A by definition.

Then you can replace A with A1 and proceed to examine the rest of its common denominators with B in descending order, until there's only 1 left, which means that the last examined value of A is the answer.

Explanation for first sentence:

Imagine A and B can be written:

A = a * d * e
B = a * b * c * e * f
  where a > b > c > d > e > f
Then the greatest common denominator (GCD) of (A,B) is a. This means that if you divide A by a, then you obtain A1 = A / a = d * e.

A is dividable by A1 (because A / A1 = a), and you can now find the GCD of (A1,B), that will be e, the next common denominator of (A,B) in descending order.
*/