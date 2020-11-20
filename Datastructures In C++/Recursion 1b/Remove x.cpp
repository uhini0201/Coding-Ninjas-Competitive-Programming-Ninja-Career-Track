int len(char* s){
    int i=0;
    while(s[i]!='\0')
        i++;
    return i;
}
void r(char* s,int n)
{
    if(s[0]=='\0')
        return;
    if(s[0]=='x')
    {
        for(int i=0;i<n;i++)
        {
            s[i]=s[i+1];
        }
        r(s,n-1);
    }
    else
        r(s+1,n);
    
}
void removeX(char input[]) {
    r(input,len(input));

}
