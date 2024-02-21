void sort_even_odd(int n, int a[]) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (a[i] % 2 == 0) {
            i++;
        } else {
            int temp = a[i];
            for (int k = i; k < j; k++) {
                a[k] = a[k + 1];
            }
            a[j] = temp;
            j--;
        }
    }
}

