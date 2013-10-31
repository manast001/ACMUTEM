double determinante(double **a,int n)
{
  int det,l;
  det=a[1][1];
  for(int k=1;k<=n-2;k++)
  {
    l=k+1;
    for(int i=l;i<=n-1;i++)
    {
      for(int j=l;j<=n-1;j++)
      a[i][j] = ( a[k][k]*a[i][j]-a[k][j]*a[i][k] )/a[k][k]; 
    }
      det=det*a[k+1][k+1];
   }
  return det;
}
long fibonachi(long n)
{
  if(n<=1)
    return 1;
    else
    return fibonachi(n-1)+fibonachi(n-2);
}

