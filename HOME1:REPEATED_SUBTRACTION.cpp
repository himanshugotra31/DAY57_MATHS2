int Solution::getFinal(int A, int B)
{
    if(A==0)
    {
        return B;
    }
    else if(B==0)
    {
        return A;
    }
    else
    {
        int temp=__gcd(A,B);
        temp*=2;
        return temp;
    }
}
//refer page 5-6. notebook 3
//T.C. = O(log(min(a,b)));----- it's only for finding gcd. for rest cases our T.C. is 0(1)
//so, our final T.C. is O(log(min(a,b)))