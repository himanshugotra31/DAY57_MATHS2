int Solution::solve(int A) 
{
    int temp=A;
    int i;
    for(i=1;(i*i)<A;i++)
    {
        if(i>temp and temp!=0)
        {
            return temp;
        }
        if(temp==0)
        {
            return i-1;
        }
        temp=temp-i;
    }
}
