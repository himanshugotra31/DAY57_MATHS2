int Solution::solve(vector<int> &A)
{
    int final_gcd=__gcd(A[0],A[1]);
    for(int i=2;i<A.size();i++)
    {
        final_gcd=__gcd(final_gcd,A[i]);
    }
    if(final_gcd==1)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
//T.C. For this code is O(A log(A))
//Refer to page 15 of notebook 4
