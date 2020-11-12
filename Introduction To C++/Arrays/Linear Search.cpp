int linearSearch(int *a, int n, int k)
{
   
       
        
        int i,x=-1;
       for( i=0;i<n;i++)
       {
         if((a[i])==k){
          x=i;
            break;
         }
       }
     return x;

}
