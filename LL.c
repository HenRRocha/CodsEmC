int printMonth(int firstWeekday, int days) {
  int week = 0;

  // print spaces to fill not used days
  for (int d = 0; d < firstWeekday; d++) {
    printf("    ");
    week++;
  }

  // print days that need a zero at its side
  for (int d = 1; d < 10; d++) {
    printf(" 0%d ", d);
    week++;

    if (week == 7) {
      printf("\n");
      week = 0;
    }
  }

  // print all the other days
  for (int d = 10; d <= days; d++) {
    printf(" %d ", d);
    week++;

    if (week == 7) {
      printf("\n");
      week = 0;
    }
  }

  printf("\n");

  return week;
}