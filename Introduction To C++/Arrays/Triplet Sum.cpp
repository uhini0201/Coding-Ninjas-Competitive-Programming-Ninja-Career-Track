int tripletSum(int *a, int n, int x)
{
    int count=0;
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            for(int k=0;k<j;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                    count++;
            }
        }
    }
    return count;
}
