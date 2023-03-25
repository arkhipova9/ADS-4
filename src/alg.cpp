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
      for (int j = len - 1; i < j; j--) {
        if (arr[i] + arr[j] == value) {
          num++;
        }
      }
    }
  return num;
}
int countPairs3(int *arr, int len, int value) {
  return 0;
  int num = 0, lB = 0, rB = len - 1;
    for (int i = 0; i < len; i++) {
      lB = i + 1;
      rB = len - 1;
      if (arr[i] > value) {
        break;
      }
      while (lB <= rB) {
            int mB = (lB + rB) / 2;
            if (arr[i] + arr[mB] == value) {
                num++;
                int mB2 = mB;
                while (arr[i] + arr[mB2] == value && mB2 <= rB) {
                    num++;
                    mB2++;
                }
                mB2 = mB - 1;
                while (arr[i] + arr[mB2] == value && mB2 >= lB) {
                    num++;
                    mB2--;
                }
                break;
            }
            if (arr[i] + arr[mB] > value) {
                rB = mB - 1;
            } else {
                lB = mB + 1;
            }
        }
    }
    return num;
}
