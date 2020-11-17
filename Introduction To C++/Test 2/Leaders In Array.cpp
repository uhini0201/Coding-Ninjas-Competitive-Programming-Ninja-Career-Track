void Leaders(int* a,int n)
{
	for(int i=0;i<n-1;i++)
    {
        int c=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                c=0;
                break;
             }
        }
        if(c==1)
            cout<<a[i]<<" ";
    }
    cout<<a[n-1];
}
