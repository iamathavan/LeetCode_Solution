//Palindrome Number
//Memory:8mb
//Time:0ms
//Language:C
bool isPalindrome(int x) {
    if(x<0 || (x!=0 && x%10==0)) return false;
    int check=0;
    while(x>check){
        check=check*10+x%10;
        x/=10;
    }
    retrun (x==check || x==check/10);
}
