#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
   
    
    while (true)
    {
        //����
        int h;
        cout << "�������� 1 - ����, 0 - �����" << endl;
        cin >> h;

        if (h == 0)
        {
            break;
        }

        cout << "������� ���������� �����" << endl;

        int m;

        cin >> m;

        cout << "��������� ������" << endl;

        //�������� ����������� �������
        int** arr = new int* [m];
        for (int i = 0; i < m; i++)
        {
            arr[i] = new int[m - i + 1];
            arr[i][0] = m - i;
            for (int j = 1; j <= m - i; j++)
            {
                arr[i][j] = rand() % 100;
            }
        }
        //����� �������
        for (int i = 0; i < m; i++)
        {
            for (int j = 1; j <= arr[i][0]; j++)
                cout << " " << arr[i][j];
            cout << endl;
        }

        //������ �����
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = 0; j < m - i - 1; j++)
            {
                if (arr[j][1] > arr[j + 1][1])
                {
                    int* b = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = b;
                }
            }
        }

        cout << "�������� ������" << endl;

        //����� �������� �������
        for (int i = 0; i < m; i++)
        {
            for (int j = 1; j <= arr[i][0]; j++) 
                cout << " " << arr[i][j];
            cout << endl;
        }
        //�������� �������
        for (int i = 0; i < m; i++) 
            delete[] arr[i];
        delete[] arr;
    }

    return 0;
}
