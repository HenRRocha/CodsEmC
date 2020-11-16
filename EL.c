#include <stdio.h>

int isLeap(int year) {
  if (year % 100 == 0)
    year /= 100;

  return year % 4 == 0;
}

void testLeap() {
  if (isLeap(1986))
    printf("error leap\n");
  if (!isLeap(2000))
    printf("error leap\n");
  if (isLeap(2001))
    printf("error leap\n");
  if (isLeap(2100))
    printf("error leap\n");
  if (!isLeap(2400))
    printf("error leap\n");
}

struct Date {
  int year;
  int month;
  int day;
};

struct Date easternDate(int year) {
  struct Date date;
  date.year = year;

  int g = year % 19 + 1;
  int c = year / 100 + 1;
  int x = 3 * c / 4 - 12;
  int z = (8 * c + 5) / 25 - 5;
  int e = (11 * g + 20 + z - x) % 30;

  if ((e == 25 && g < 11) || e == 24)
    e++;

  int n = 44 - e;

  if (n < 21)
    n += 30;

  int d = 5 * year / 4 - (x + 10);

  n = n + 7 - ((d + n) % 7);

  if (n > 31) {
    date.day = n - 31;
    date.month = 4;
  } else {
    date.day = n;
    date.month = 3;
  }

  return date;
}

void testEastern() {
  struct Date date;

  date = easternDate(1986);
  if (date.day != 30 || date.month != 3)
    printf(
      "eastern error %d-%d-%d\n"
      , date.year, date.month, date.day
    );

  date = easternDate(1990);
  if (date.day != 15 || date.month != 4)
    printf(
      "eastern error %d-%d-%d\n"
      , date.year, date.month, date.day
    );

  date = easternDate(2020);
  if (date.day != 12 || date.month != 4)
    printf(
      "eastern error %d-%d-%d\n"
      , date.year, date.month, date.day
    );
}

int SUNDAY = 0;
int MONDAY = 1;
int TUESDAY = 2;
int WEDNESDAY = 3;
int THURSDAY = 4;
int FRIDAY = 5;
int SATURDAY = 6;

int firstWeekdayOf(int year) {
  struct Date eastern = easternDate(year);

  int januaryDays = 31;
  int februaryDays = 28 + isLeap(year);
  int marchDays = 31;

  int daysUntilEastern = eastern.day
    + januaryDays + februaryDays;

  if (eastern.month == 4)
    daysUntilEastern += marchDays;

  int firstSunday = daysUntilEastern % 7;

  switch (firstSunday) {
    case 1: return SUNDAY;
    case 2: return SATURDAY;
    case 3: return FRIDAY;
    case 4: return THURSDAY;
    case 5: return WEDNESDAY;
    case 6: return TUESDAY;
    default: return MONDAY;
  }
}

void testFirstWeekDay() {
  int weekDay;

  weekDay = firstWeekdayOf(1986);
  if (weekDay != WEDNESDAY)
    printf("first weekday error %d\n", weekDay);

  weekDay = firstWeekdayOf(1990);
  if (weekDay != MONDAY)
    printf("first weekday error %d\n", weekDay);

  weekDay = firstWeekdayOf(2020);
  if (weekDay != WEDNESDAY)
    printf("first weekday error %d\n", weekDay);
}

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

void printCalendar(int year) {
  int firstWeekday = firstWeekdayOf(year);

  printf("            %d\n", year);

  printf("January\n");
  int lastDayOfJan = printMonth(firstWeekday, 31);

  printf("February\n");
  printMonth(lastDayOfJan, 28 + isLeap(year));
}

int main() {
  testLeap();
  testEastern();
  testFirstWeekDay();

  printCalendar(1986);

  return 0;
}
