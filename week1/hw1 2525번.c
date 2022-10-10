#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int hour;
	int min;
	int time;
	scanf("%d %d", &hour, &min);
	scanf("%d", &time);
	if (min + time >= 60) {
		int n = (min + time) / 60;
		int m = (min + time) % 60;
		if (hour + n >= 24) {
			hour = hour + n - 24;
			min = m;
		}
		else {
			hour = hour + n;
			min = m;
		}
	}
	else if (min + time < 60) {
		min = min + time;
	}
	printf("%d %d", hour, min);
	return 0;
}