//
// Created by 12547 on 2021/7/29.
//

int find_lost(const int a[], int n) {
    int record[n];
    for (int i = 0; i < n; ++i) {
        record[n] = 0;
    }
    for (int i = 0; i < n; ++i) {
        if(a[i] > 0 && a[i] <= n) {
            record[a[i] - 1] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        if(record[i] == 0) return i + 1;
    }

    return n + 1;
}


int main() {

}