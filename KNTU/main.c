#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");
    printf("Даний застосунок призначений для: \nВирахування зарахованих балів за лекцію; \nКількість занять; \nКількість балів, які не зараховано; \nВідсоток лекцій під час яких студент працював активно\n");
    printf("Даний застосунок створив Ісаченков Едуард Віталійович.\nЦентральноукраїнський національний технічний університет.\nДата виготовлення 27.10.2021");
    double lecture = 21, lectureact, lectureact1, mark, noactive, interest;
    printf("\nКількість лекцій, під час яких здобувач активно працював:= ");
    scanf("%d", &lectureact);
    printf("Кількість лекцій, під час яких здобувач заслуговує оцінку:= ");
    scanf("%d", &lectureact1);
    mark=lectureact1*2; //1
    noactive = (lecture-lectureact1)*2; //2
    interest = (lectureact/lecture)*100; //3
    printf("Зарахованих балів за лекції = %d", mark);
    printf("\nКількість занять, бали за які студентові не зараховано=%d", noactive);
    printf("\nВідсоток лекцій, під час яких студент працював активно=%0.03f", interest);
    return 0;

}
