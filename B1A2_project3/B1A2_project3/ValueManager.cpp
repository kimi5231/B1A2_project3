#include "pch.h"
#include "ValueManager.h"

void ValueManager::Init(HWND hwnd)
{
	// ������ �ڵ�
	_hwnd = hwnd;

	// ������ â ������
	_winSize.x = DefaultWinSizeX;
	_winSize.y = DefaultWinSizeY;
}