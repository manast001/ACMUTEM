double determinante(double **a,int n)
{
  
  det=a[1][1];
  for(k=1;k<=n-2;k++)
  {
    l=k+1;
    for(i=l;i<=n-1;i++)
    { 
      for(j=l;j<=n-1;j++)
      a[i][j] = ( a[k][k]*a[i][j]-a[k][j]*a[i][k] )/a[k][k]; }
      det=det*a[k+1][k+1];
    } 
  }
}

long fibonachi(long n)
{
  if(n<=1)
    return 1;
    else
    return fibonachi(n-1)+fibonachi(n-2);
}

