 #include<stdio.h>
int binarysearch(int k,int arr[],int key)
{   
    int val=0;
    int i;
    for (i=0;i<k;i++)
    {
        if(arr[i]==key)
        {
            val = 1;
        
        }
    }
        
    return val;
}

int main()
{   int pos;
    int res =0;
    int k;
    int arr[50];
    scanf("%d",&k);
    for(int x=0;x<=k-1;x++)
    {
        scanf("%d\n",&arr[x]);
    }
    int key;
    scanf("%d",&key);
    int i,j;
    res = binarysearch(k,arr,key);
    for (i=0;i<k;i++)
    {
        if(arr[i]==key)
        {
            pos = i;
        
        }
    }
    if (res == 1)
    {
        printf("FOUND\n");
        printf("%d",pos+1);
        
    }
    else if(res == 0)
    {
        printf("NOT FOUND");
    }     
    
    return 0;
}
