// time �Լ��� time_t Ÿ���� ���� ���� �ð� ������ ��ȯ
// �� ���� ���� �ð���� ǥ�õȴ�. 
// localtime �Լ��� time_t ���� ���� �ð����� struct tm ����ü�� ��ȯ�Ѵ�. 
// �� ����, strftime �Լ��� ����Ͽ� �ð� ������ ���ϴ� �������� ����Ѵ�.

// strftime �Լ����� 
// 1��° ���ڴ� ���ڿ� ����
// 2��° ���ڴ� ������ ũ��
// 3��° ���ڴ� ����� �ð� ������ ��Ÿ���� ���ڿ�
// ����� "YYYY-MM-DD HH:MM:SS" �������� ���

#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *local_time = localtime(&t);
    char time_str[128];

    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", local_time);
    printf("���� �ð�: %s\n", time_str);

    return 0;
}

// time(NULL)���� NULL�� �� �ִ°�?
// C�� time �Լ��� ���ڷ� �ð� ������ ���� ����ü �����͸� �޴´�. 
// �� ����ü �����͸� NULL�� �����ϸ� ���� �ð� ������ ���� �� �ִ�.
// ��, time(NULL)�� ���� �ð��� �� ������ ��ȯ�ϴ� ��.

// time �Լ��� ������Ÿ���� ������ �����ϴ�.
// time_t time(time_t *timer);
// ���⼭ time_t *timer ���ڰ� ����ü �������̸�, 
// ���� �ð� ������ ��� ���� �뵵�� ���ȴ�. 
// time(NULL)�� ȣ���� ��쿡�� ����ü �����Ͱ� �ʿ� ���� ������ NULL ���� �����ϴ� ��.