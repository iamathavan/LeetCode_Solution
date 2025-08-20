/*
46/46 passed
100% acceptance
7.69mb
0 ms
*/
int climbStairs(int n) {
    if(n==0 || n==1){
        return 1;
    }
    int a=1,b=1,temp;
    for(int i=2;i<n+1;i++){
        temp=a+b;
        a=b;
        b=temp;
    }
    return b;
}
