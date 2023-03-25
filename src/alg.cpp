// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int num = 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                num++;
            }
        }
    }
    return num;
}
int countPairs2(int *arr, int len, int value) {
  return 0;
  int num = 0;
    for (int i = 0; i < len - 1; i++) {
        if (arr[i] > value) {
            break;
        }
        for (int j = len - 1; i < j; j--) {
            if (arr[j] > value - arr[i]) {
                break;
            }
            if (arr[i] + arr[j] == value) {
                num++;
            }
        }
    }
    return num;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
  int num = 0;
    for (int i = 0; i < len - 1; i++) {
        int lB = i, rB = len;
        while (lB < rB - 1) {
            int mB = (lB + rB) / 2;
            if (arr[i] + arr[mB] == value) {
                num++;
                int mB2 = mB + 1;
                while (arr[i] + arr[mB2] == value && mB2 < rB) {
                    num++;
                    mB2++;
                }
                mB2 = mB - 1;
                while (arr[i] + arr[mB2] == value && mB2 > lB) {
                    num++;
                    mB2--;
                }
                break;
            }
            if (arr[i] + arr[mB] > value) {
                rB = mB;
            } else {
                lB = mB;
            }
        }
    }
    return num;
}
