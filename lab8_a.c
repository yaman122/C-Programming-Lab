 #include<stdio.h>
int main()
{
    int n;
    int arr[50];
    scanf("%d",&n);
    for(int x=0;x<=n-1;x++)
    {
        scanf("%d\n",&arr[x]);
    }
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int k=0;k<n;k++)
    {
        printf("%d\n",arr[k]);
    }
    
    return 0;
}
