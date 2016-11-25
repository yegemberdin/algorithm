  /* partition */
  while (i <= j) {
        while (arr[i] < pivot)
              i++;
        while (arr[j] > pivot)
              j--;
        if (i <= j) {
              tmp = arr[i];
              arr[i] = arr[j];
              arr[j] = tmp;
              i++;
              j--;
        }
  };

  /* recursion */
  if (left < j)
        quickSort(arr, left, j);
  if (i < right)
        quickSort(arr, i, right);
}