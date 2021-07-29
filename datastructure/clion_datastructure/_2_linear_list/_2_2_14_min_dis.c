//
// Created by 12547 on 2021/7/29.
//

#define INT_MAX 0x7fffffff

int get_dis(int a, int b) {
    return a > b ? a - b : b - a;
}

int is_min(int a, int b, int c) {
    if(a <= b && a <= c) return 1;
    return 0;
}
int min_dis(int S1[], int len1, int S2[], int len2, int S3[], int len3) {
    int min_dis = INT_MAX;
    int i = 0, j = 0, k = 0;
    while(i < len1 && j < len2 && k < len3 && min_dis > 0) {
        int d = get_dis(S1[i], S2[j]) + get_dis(S1[i], S3[k]) + get_dis(S2[j], S3[k]);
        if(d < min_dis) min_dis = d;
        if(is_min(S1[i], S2[j], S3[k])) i++;
        else if(is_min(S2[j], S1[i], S3[k])) j++;
        else k++;
    }
    return min_dis;
}

int main() {

}
