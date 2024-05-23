int Minimum(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    else if(a == b)
    {
        return a;
    }
    else{
        return b;
    }
}

int Maximum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else if(a == b)
    {
        return a;
    }
    else{
        return b;
    }
}

float Mean(int a, int b)
{
    return (a + b) / 2;
}