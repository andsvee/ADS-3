// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
    int count = 0;
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == value) {
            count++;
            int temp = mid - 1;
            while (temp >= 0 && arr[temp] == value) {
                count++;
                temp--;
            }
            temp = mid + 1;
            while (temp < size && arr[temp] == value) {
                count++;
                temp++;
            }
            return count;
        }
        else if (arr[mid] < value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return count;
}
