int is_two_same(int size, int* array) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(array[i] == array[j]) {
                return 1;
            }
        }
    }
    return 0;
