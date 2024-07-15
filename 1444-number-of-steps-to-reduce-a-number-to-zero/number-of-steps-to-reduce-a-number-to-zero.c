int numberOfSteps(int num) {
    int cnt = 0;
    while(num>1){
        if(num&1) cnt+=2;
        else cnt++;
        num>>=1;
    }
    if(num) cnt++;
    return cnt;
}