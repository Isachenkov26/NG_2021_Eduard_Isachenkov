#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale = setlocale(LC_ALL, "");
    printf("����� ���������� ����������� ���: \n����������� ����������� ���� �� ������; \nʳ������ ������; \nʳ������ ����, �� �� ����������; \n³������ ������ �� ��� ���� ������� �������� �������\n");
    printf("����� ���������� ������� ��������� ������ ³��������.\n�������������������� ������������ �������� ����������.\n���� ������������ 27.10.2021");
    double lecture = 21, lectureact, lectureact1, mark, noactive, interest;
    printf("\nʳ������ ������, �� ��� ���� �������� ������� ��������:= ");
    scanf("%d", &lectureact);
    printf("ʳ������ ������, �� ��� ���� �������� ��������� ������:= ");
    scanf("%d", &lectureact1);
    mark=lectureact1*2; //1
    noactive = (lecture-lectureact1)*2; //2
    interest = (lectureact/lecture)*100; //3
    printf("����������� ���� �� ������ = %d", mark);
    printf("\nʳ������ ������, ���� �� �� ��������� �� ����������=%d", noactive);
    printf("\n³������ ������, �� ��� ���� ������� �������� �������=%0.03f", interest);
    return 0;

}
