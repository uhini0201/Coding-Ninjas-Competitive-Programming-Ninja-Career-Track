void reverse(int j,int i,char* s)
{
    while(j<=i)
    {
        char c=s[j];
        s[j]=s[i];
        s[i]=c;
        j++;i--;
    }
}

void reverseStringWordWise(char s[]) {
    int n=0,i=0;
    while(s[n]!='\0')
    {
        n++;
    }
    s[n]=' ';
    s[n+1]='\0';
    n--;
    while(i<=n)
    {
        char c=s[i];
        s[i]=s[n];
        s[n]=c;
        i++;
        n--;
    }
    i=0;int j=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        { 
            reverse(j,i-1,s);
         j=i+1;
        }
        i++; 
    }
    s[i-1]='\0';
    
}
