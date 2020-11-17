void minLengthWord(char s[], char o[]){
		
	int n=0;
    while(s[n]!='\0')
      n++;
    s[n]=' ';
    s[++n]='\0';
    int mini=1000000,l=0,j=0;
    for(int i=0;i<=n;i++)
    {
        if(s[i]==' ')
        {
            if(l<mini)
            {
                mini=l;
                int t=0;
                for(int k=j;k<i;k++)
                    o[t++]=s[k];
                o[l]='\0';
            }
            l=0;
            j=i+1;
        }
        else
        {
            l++;
        }
    }
}


