int fact(int n)
{
    if(n==0)
    return(1);
    else{
        return fact(n-1)*n;
    }
}
int Isum(int n)
{
    int s = 0;
    int  i;
    for(i=1; i<=n; i++)
    s = s+i;
    return s;
}
int main()
{
    int r;
    r =  fact(1);
    printf("%d", r);
    return 0;
}