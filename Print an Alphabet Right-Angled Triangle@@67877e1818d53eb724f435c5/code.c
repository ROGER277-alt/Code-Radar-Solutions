// Your code here...
int main()
{
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(int j=0;j<=i;j++){
            printf("%c",'A' + j);
        }printf("\n");
    }return 0;
}