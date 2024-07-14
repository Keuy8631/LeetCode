

int minFlips(int a, int b, int c){
    int cnt = 0, a_tmp = 0, b_tmp = 0, c_tmp = 0;
    while(a||b||c){
        a_tmp = a&1;
        b_tmp = b&1;
        c_tmp = c&1;
        if(!c_tmp) cnt+=a_tmp+b_tmp;
        else if(!a_tmp && !b_tmp) cnt += 1;
        a>>=1;
        b>>=1;
        c>>=1;
    }
    return cnt;
}