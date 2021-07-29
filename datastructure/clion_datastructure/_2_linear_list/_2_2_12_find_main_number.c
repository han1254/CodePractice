//
// Created by 12547 on 2021/7/29.
//

int find_main_number(int a[], int n) {
    int temp = a[0];
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if(a[i] == temp) {
            count++;
        } else {
            if(count == 0) {
                temp = a[i];
                count = 1;
            } else {
                count--;
            }
        }
    }
    count = 0;
    for (int i = 0; i < n; ++i) {
        if(a[i] == temp) count++;
    }
    return count > (n / 2) ? temp : -1;
}

