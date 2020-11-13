void spiralPrint(int **a, int r, int c)
{
  int sr=0,er=r-1,sc=0,ec=c-1,s=1;
    while(s<=r*c)
    {
        for(int i=sc;i<=ec;i++)
        {
            cout<<a[sr][i]<<" ";
            s++;
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            cout<<a[i][ec]<<" ";s++;
        }
        ec--;
        for(int i=ec;i>=sc;i--)
        {
            cout<<a[er][i]<<" ";
            s++;
        }
        er--;
        for(int i=er;i>=sr;i--)
        {
            cout<<a[i][sc]<<" ";
            s++;
        }
        sc++;
    }
}
