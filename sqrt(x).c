/*
1019 / 1019 test cases passed.
Status: Accepted
Runtime: 0 ms
Memory Usage: 8.5 MB
*/
int mySqrt(int x) {
    if(x<2) return x;
    long r=x;
    while(r>x/r){
        r=(r+x/r)/2;
    }
    return (int)r;
}
