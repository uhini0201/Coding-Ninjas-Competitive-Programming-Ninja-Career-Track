void intersection(int *a1, int *a2, int n1, int n2)
{ 
 if(n1==0||n2==0)
     return ;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a1[i]==a2[j])
            {cout<<a1[i]<<" ";
             a2[j]=-10000000;
             break;
            }
         }
    }
    cout<<endl;
}
