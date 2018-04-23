#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct height {char sex[7]; double height;};

int comp1(const void *p1, const void *p2)
{
  /* 如果compar返回值小于0（< 0），那么p1所指向元素会被排在p2所指向元素的前面 */
  if (strcmp(((struct height *)p1)->sex, "male") == 0 && strcmp(((struct height *)p2)->sex, "female") == 0)
    return -1;
  else if (strcmp(((struct height *)p1)->sex, "female") == 0 && strcmp(((struct height *)p2)->sex, "male") == 0)
    return 1;
  else
    return 0;
}

int comp2(const void *p1, const void *p2)
{
  if (((struct height *)p1)->height - ((struct height *)p2)->height > 0) return 1;
  else return -1;
}

int comp3(const void *p1, const void *p2)
{
  if (((struct height *)p1)->height - ((struct height *)p2)->height > 0) return -1;
  else return 1;
}

int main()
{
	int n, nmale = 0;

	struct height stud[40];
	scanf("%d", &n);

	int i;
	for (i = 0; i < n; ++i) {
		scanf("%s %lf", stud[i].sex, &stud[i].height);
		if (strcmp(stud[i].sex, "male") == 0) nmale++;
	}
	qsort(stud, n, sizeof(stud[0]), comp1);
	qsort(stud, nmale, sizeof(stud[0]), comp2);
	qsort(stud + nmale, n - nmale, sizeof(stud[0]), comp3);
	for (i = 0; i < n; ++i) {
		printf("%.2f ", stud[i].height);
		//printf("%s:%.2f ", stud[i].sex, stud[i].height);
	}

	return 0;
}
