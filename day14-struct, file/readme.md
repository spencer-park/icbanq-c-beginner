## ����ü�� ���� ������
�ش� �κ��� �ٺ����� ���غ��� ������ �����ϸ� ����ɽô�.
������ �ش� �κ��� �������� Ȱ�� ���ַ� �н��� �غ����մϴ�.

## ����ü��
���� �Ӽ��� ���� ��ü�� �ϻ��Ȱ���� ���� �� �� �ֽ��ϴ�.
��ư� ǥ���� �ߴµ�, �����ϸ� �����ϴ�.
"�б����� �л� ������ ó���� �� � ������ �ʿ��ұ��?"
��� ���� �� �����е� �Ӹ��ӿ���
1. �л� �̸�
1. �г�
1. ��
1. ��ȣ
1. ���� ���� A
1. ���� ���� B
���� ���÷��� �� �����ϴ�.

��, �л��̶� Ÿ���� �� �ȿ� ���� ���� �����͸� ���� �ֽ��ϴ�.
�̸� ǥ���ϱ����� �迭�� ����� ���� ������, �� �� ���õ� ������� '����ü'�� ����ϴ� ����� �ֽ��ϴ�. �׸��� �̷� ��Ȳ�̶�� '����ü'�� ����ϴ� �� �� ������ ����Դϴ�. c���δ� �Ʒ�ó�� ������ �� �ֽ��ϴ�.

```c
struct Student{
    char[20] name;
    int grade, class, number;
    int subjectA, subjectB;
}
```

## ���� �����ʹ�
������ ������ ����ϱ� �� �ٵ�, ��� ������ �����Ϸ��� �ݵ�� ������ ������ ����ؾ��մϴ�. �� �׷��� �����غ���.

1. ������ ���� �ϳ��� �ִ� �����Դϴ�.
1. �̰��� �����͸� �аų� ���ο� �����͸� �ۼ��Ϸ���
1. ������ ���� �� �� �ִ�, �ּҷ� ���� �����Ϳ� �����ϰ� �ٷ�� ������ ������ ����ؾ��մϴ�.

## ���� ���� ���
���� ������ ������ ����ϱ� ���� �˾Ƶ־��� ��� 3������ �ֽ��ϴ�.
���� �ǽ����� 'r'�� 'w'�� ����� �����Դϴ�.
|���|��弳��|
|-|-|
| 'r'  | �б� �������� ���� ���� |
| 'w'  | ���� �������� ���� ���� (������ �������� ������ �����ϰ�, �����ϸ� ���� ������ ����� ���� ���ϴ�.) |
| 'a'  | ���� �������� ���� ���� (������ �������� ������ �����ϰ�, �����ϸ� ���� ���� ���ο� ������ �߰��մϴ�.) |
| 'r+' | �б� �� ���� ���� ���� ���� |
| 'w+' | �б� �� ���� ���� ���� ���� (������ �������� ������ �����ϰ�, �����ϸ� ���� ������ ����� ���� ���ϴ�.) |
| 'a+' | �б� �� ���� ���� ���� ���� (������ �������� ������ �����ϰ�, �����ϸ� ���� ���� ���ο� ������ �߰��մϴ�.) |

## ���� ������ ���� �Լ�
fputs, fgets���� fprintf, fscanf�� ��õ�մϴ�. ������ �ǽ��� ���� �˾ƺ��ô�.

|���|��弳��|
|-|-|
| fopen() | ������ ���� ���� �Լ���, ������ ��ο� ���� ��带 ���ڷ� �޽��ϴ�. ������ �� �� ���Ǵ� ���� ��忡�� �б�(r), ����(w), �߰�(a), ���� ���(b) ���� �ֽ��ϴ�. |
| fclose() | ������ �ݱ� ���� �Լ���, fopen() �Լ��� ���� ������ �ݾ��ݴϴ�. ������ ���� ������ ���α׷��� ����� ������ ������ ��� ���� ���·� �������� �� �ֽ��ϴ�. |
| fgets() | ���Ϸκ��� �� �پ� ���ڿ��� �о���� �Լ���, ���� �����Ϳ� ���ڿ��� ������ ����, �׸��� ������ ũ�⸦ ���ڷ� �޽��ϴ�. ������ ���� �����ϰų� ������ ũ�⸦ �ʰ��� ������ ���ڿ��� �о�ɴϴ�. |
| fputs() | ���Ͽ� ���ڿ��� ���� �Լ���, ���ڿ��� ���� �����͸� ���ڷ� �޽��ϴ�. ���Ͽ� ���ڿ��� �� ���� ���� ���ڸ� �����Ͽ� �� �� �ֽ��ϴ�. |
| fprintf() | ���Ͽ� ����ȭ�� ����� ���� �Լ���, printf() �Լ��� ����� �������� ���ڿ��� ���� ���ڷ� �޽��ϴ�. ���ڿ� ���� %d, %f ���� ���� �����ڸ� ����Ͽ� ���� ����� �� �ֽ��ϴ�. |
| fscanf() | ���Ϸκ��� ����ȭ�� �Է��� �޴� �Լ���, fprintf() �Լ��� ����� �������� ���ڿ��� ���� ���ڷ� �޽��ϴ�. ���Ͽ��� ���� �о�ͼ� ������ �����մϴ�. |