bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if(!n) return true;
    for(int i=0; i<flowerbedSize; i++){
        if(!flowerbed[i] && (!i||!flowerbed[i-1]) && (i==flowerbedSize-1||!flowerbed[i+1])){
            flowerbed[i] = 1;
            n--;
            if(!n) return true;
        }
    }
    return false;
}