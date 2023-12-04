#include <stdio.h>//2;33
#include <stdlib.h>
#define _WIN32_WINNT 0x0501 //������� ��� ������� � ��������� ��������
#include <windows.h>

#define width 80
#define height 24 //������ � ������ ����������� ����
#define c_sand (char)176
#define c_water (char)219
#define c_wall '#'
#define c_space ' '

typedef char Tmap[height][width]; //��� ������ ��� �������� �����
Tmap map; //���� �����
POINT mousePos;//koordinat simvola gde nahod mashka
POINT sellSize;//razmer v pikcilah

POINT GetMousePos(HWND hwnd, POINT sellSz)
{
    static POINT pt;
    GetCursorPos(&pt);
    ScreenToClient(hwnd, &pt);
    pt.x /= sellSz.x;
    pt.y /= sellSz.y;
    return pt;
}

void ClearMap() //������� �������� �����
{
    memset(map, c_space, sizeof(map)); //���� ��������� ������ ��������� �������� ���������
    map[height-1][width-1] = '\0';
}

void SetCurPos(int x, int y) //������� ����������� �������
{
    SetCurPos(0,0);
    printf("%s", map[0]);
}

int main()
{
    ClearMap();
    ShowMap(map);
    return 0;
}
