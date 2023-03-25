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
        int rightB = len, leftB = i;
        while (leftB < rightB - 1) {
            int middleB = (leftB + rightB) / 2;
            if (arr[i] + arr[middleB] == value) {
                num++;
                int middleB2 = middleB + 1;
                while (arr[i] + arr[middleB2] == value && middleB2 < rightB) {
                    num++;
                    middleB2++;
                }
                middleB2 = middleB - 1;
                while (arr[i] + arr[middleB2] == value && middleB2 > leftB) {
                    num++;
                    middleB2--;
                }
                break;
            }
            if (arr[i] + arr[middleB] > value) {
                rightB = middleB;
            } else {
                leftB = middleB;
            }
        }
    }
    return num;
}
