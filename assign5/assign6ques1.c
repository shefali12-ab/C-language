//program to check whether given number is prime or not
main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }
    if(i==x)
    {
        printf("%d is prime number",x);
    }
    else
    {
        printf("%d is not a prime number",x);
    }
}
