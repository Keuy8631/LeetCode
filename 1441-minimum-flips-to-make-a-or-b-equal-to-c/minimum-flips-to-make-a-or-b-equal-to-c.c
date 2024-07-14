int minFlips(int a, int b, int c) {
    int cnt = 0;
    for(int bit_pos=0; bit_pos<32; ++bit_pos){
        bool a_bit = (a >> bit_pos) & 1;
        bool b_bit = (b >> bit_pos) & 1;
        bool c_bit = (c >> bit_pos) & 1;

        if(!c_bit) cnt += a_bit + b_bit;
        else if(!a_bit && !b_bit) cnt += 1;
    }
    return cnt;
}