#include<stdio.h>
/*enum sex
    {
        male,
        female,
        secret
    };
int main()
{
    printf("%d\n",male);
        printf("%d\n",female);
    printf("%d\n",secret);

    
}关于枚举常量
*/
/*int main()
{
    char arr1[]="bit";
    char arr2[]={'b','i','t','\0'};
    char arr3[]={'b','i','t','\0'};
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%s\n",arr3);

}\0的重要性，arr2没有它就没有结束标志，就没有识别，会随机给
*/
/*int main()
{
    printf("%c\n",'\'');
    printf("%s\n","\"");
    return 0;
}*/
/*int main()
{
    int n=1;
    int m=2;
    switch(n)
    {
        case 1:
        m++;
        case 2:
        switch (n)
        {
            case 1:n++;
            case 2:m++;
            n++;
            break;


           
        }
        case 4:
        m++;
        break;
        default:
        break;
    }
    printf("m=%d,n=%d\n",m,n);
    return 0;
    了解swtich case 端口性；
    */
   /*int main()
   {
       int i=0;
       for(i=0;i<=10;i++)
       {
           if(i==5)
           {
               break;
           }
           printf("%d\n",i);
       }
       return 0;
   }
   int main()
   {
       int i=0;
       for(i=0;i<=10;i++)
       {
           if(i==5)
           {
               continue;
           }
           printf("%d\n",i);
       }
       return 0;
   }
   break的使用中while和for完全一致，但continue不一样，因为对i处理位置不一样，continue回到入口后
   i还能继续加，所以可以*/
   /*int main()
   {
       for(;;)
       {
           printf("hehe\n");
       }
       return 0;
   }
   for后东西可以省略，如果判断省略，就会恒为真，会陷入死循环*/
/*   int main()
   {
       int i=0;
       int j=0;
       for(i=0;i<10;i++)
       {
           for(j=0;j<10;j++)
           {
               printf("hehe ");
           }
       }
   }//这个会执行10*10=100次
   int main()
   {
       int i=0;
       int j=0;
       for(;i<10;i++)
       {
           for(;j<10;j++)
           {
               printf("hehe ");
           }
       }
   }
//这一部分没有初始化j=0；所以内层只会进行一次，总共进行10*1=10次
*/
/*int main()
{
    int x,y;
    for(x=0,y=0;x<2&&y<5;++x,y++)
    {
        printf("hehe");
    }
    return 0;
}
//用两个变量同时控制
*/
/*int main()
{
    int i=0;
    int k=0;
    for(i=0,k=0;k=0;i++,k++)
    {k++;printf("%d",k);}
    
    return 0;
}这里的判断部分，k=0，这个赋值语句最后结果为0，所以直接不进循环，不执行；
*/
/*int main()
{
    int n;
    scanf("%d",&n);
    int shu;int i;
    for(i=1;i<=n;i++)
    {
        shu=shu*i;
    }
    printf("%d",shu);
}
n阶乘*/
/*int main()
{
    int sum=0;
    int i,j;int jiecheng=1;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            jiecheng=jiecheng*j;
        }
        sum+=jiecheng;
        jiecheng=1;
    }
    printf("%d",sum);
}计算1阶乘到10阶乘之和
*/
/*关于查找算法:普通查找，二分查找；
int main()
{
    int  arr1[]={1,2,3,4,5,6,7,8,9,10};
    int k=4;
    int i=0;
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    for(i=0;i<sz;i++)
    {
        if(k==arr1[i])
        {
            printf("找到了，下标是：%d",i);
            break;
        }

    }
    if(i==sz)
    printf("找不到\n");
    return 0;
}
*/
/*int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int left=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int right=sz-1;
    int mid=(left+right)/2;
    int k=1;
    int i=0;
    while(left<=right)
    {
         if(arr[mid]==k)
    {
        printf("找到了，下标是%d",mid);
        break;
        
    }
    else if(arr[mid]<k)
    {
        left=mid;
    }
    else if(arr[mid]>k)
    {
        right=mid;
    }
    mid=(left+right)/2;
}
   

}
关于二分查找：
1、学习while的条件（左<=右）
2、mid要重置才行*/
/*关于二分查找函数：四个变量
int search(int arr[],int left,int rigth,int key)
{
    int mid=0;
    while(left<=right)
    {
        mid=(right+left)/2;
        if(arr[mid]>key)
        {
            right=mid-1;
        }
        else if(arr[mid]<key)
        {
            left=mid+1;
        }
        else 
        return mid;//找到了，直接返回下标
    }
}
   
