int duplicateNumber(int *a, int n)
{
     int maxi=-1;
   for(int i=0;i<n;i++)
   {
      if(a[i]>maxi)
          maxi=a[i];
   }
    
    int m[maxi+1];
    for(int i=0;i<=maxi;i++)
        m[i]=0;
        
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
        }
    for(int i=0;i<n;i++){
     if(m[a[i]]==2)
            return a[i];
    }
}
