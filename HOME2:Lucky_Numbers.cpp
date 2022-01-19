vector<int> make_spf(int A)
{
    vector<int> spf1(A+1);
    spf1[0]=1;
    for(int i=1;i<A+1;i++)
    {
        spf1[i]=i;
    }
    for(int i=2;(i*i)<=A;i++)
    {
        if(spf1[i]==i)
        {
            for(int j=i*i;j<=A;j+=i)
            {
                spf1[j]=i;
            }
        }
    }
    return spf1;
}
int Solution::solve(int A) 
{
    vector<int> spf=make_spf(A);
    int count=0;
    for(int i=2;i<=A;i++)
    {
        int saw_change=0;
        int temp=i;
        while(temp>1)
        {
            int x=spf[temp];
            while(temp%x==0)
            {
                temp=temp/x;
            }
            saw_change+=1;
        }
        if(saw_change==2)
        {
            count+=1;
        }
    } 
    return count;   
}
// It's should be O(A log(log A) + A logA)
//REFER page 4-5, Notebook 3
