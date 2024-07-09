typedef struct{
    int key;
    int count;
    UT_hash_handle hh;
} HashEntry;

void addEntry(HashEntry **table, int key){
    HashEntry *entry;
    HASH_FIND_INT(*table, &key, entry);
    if(!entry){
        entry = (HashEntry*)malloc(sizeof(HashEntry));
        entry->key = key;
        entry->count = 1;
        HASH_ADD_INT(*table, key, entry);
    }
    else entry->count++;
}

bool removeEntry(HashEntry **table, int key){
    HashEntry *entry;
    HASH_FIND_INT(*table, &key, entry);
    if(entry){
        if(entry->count > 1) entry->count--;
        else{
            HASH_DEL(*table, entry);
            free(entry);
        }
        return true;
    }
    return false;
}

int maxOperations(int* nums, int numsSize, int k) {
    HashEntry *table = NULL;
    int count = 0;
    for(int i=0; i<numsSize; i++){
        int complement = k - nums[i];
        if(removeEntry(&table, complement)) count++;
        else addEntry(&table, nums[i]);
    }

    // Free hash table
    HashEntry *current, *tmp;
    HASH_ITER(hh, table, current, tmp) {
        HASH_DEL(table, current);
        free(current);
    }

    return count;
}