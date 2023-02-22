// time() �Լ��� ����Ͽ� ���� �ð��� ������
// time.h�� ���ǵ� ����ü time_t�� �̿��ؼ� now ���� ����. 
// ctime() �Լ��� ����Ͽ� ���� �ð��� �μ�
// ctime() �Լ��� time_t ���� ���ڿ� ǥ������ ��ȯ�Ѵ�.

// time_t�� C ���� �ð� ���� �����ϴ� ������ ���� �� �ϳ�
// ���������� ǥ���� Unix Epoch �ð��� ��Ÿ��
// Unix Epoch�� 1970�� 1�� 1�� 00�� 00�� 00�ʸ� �������� ����� �ð��� ��(second) ������ ǥ���� ��

#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    printf("�� �ð�: %s", ctime(&now));
    return 0;
}


