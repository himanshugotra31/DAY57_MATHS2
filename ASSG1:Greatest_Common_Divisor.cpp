int Solution::gcd(int A, int B) 
{
    int max;
    int A1;                                 //greater number
    int B1;                                 //smaller number
    if(A>B)
    {
        A1=A;
        B1=B;
    }
    else
    {
        A1=B;
        B1=A;
    }
    while(A1>B1 and B1!=0)
    {
        int temp=B1;
        A1=A1%B1;
        B1=A1;
        A1=temp;
    }
    return A1;
}
//TC for this code is O(log(min(A,B)))
//Refer to page 11 of notebook 4