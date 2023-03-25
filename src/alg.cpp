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
  int num = 0, lB = 0, rB = len - 1, mB = 0;
    for (int i = 0; i < len; i++) {
      lB = i + 1;
      rB = len - 1;
      if (arr[i] > value) {
        break;
      }
      while (lB <= rB) {
            mB = (lB + rB) / 2;
            if (arr[i] + arr[mB] == value) {
                num++;
                int mB2 = mB;
                while (true) {
                  mB++;
                  if (arr[i] + arr[mB] == value && mB <= rB) {
                    num++;
                  } else {
                    break;
                  }
                }
                mB2 = mB - 1;
                while (true) {
                  mB2--;
                  if (arr[i] + arr[mB2] == value) {
                    num++;
                  } else {
                    break;
                  }
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
