
bool checkMember(int n){

 int a=1,b=1;
    int c=0;
    if(n==1)
        return true;
    while(c<=n)
    {
        if(c==n)
            return true;
        c=a+b;
        a=b;
        b=c;
    }
return false;
}
