class Solution {
public:
    int tribonacci(int n) {
        if(n<2)
            return n;
        if(n==2)
            return 1;
        int f[n+1];
        f[0]=0;
        f[1]=1;
        f[2]=1;
        for(int i=3; i<=n; i++)
            f[i]=f[i-1]+f[i-2]+f[i-3];
        return f[n];
    }
};