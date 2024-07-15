

int tribonacci(int n){
    unsigned int sum = 0, a = 0, b = 0, c = 0;
    if(!n) return 0;
    if(n==1||n==2) return 1;
    for(int i=0; i<=n; i++){
        if(!i) a = 0;
        else if(i==1) b = 1;
        else if(i==2) c = 1;
        else{
            sum = a+b+c;
            a=b;
            b=c;
            c=sum;
        }
    }
    return sum;
}