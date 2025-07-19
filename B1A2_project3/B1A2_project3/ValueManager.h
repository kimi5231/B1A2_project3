#pragma once

// ���� ���� �뵵�� �� �������� �����ϴ� �Ŵ���
class ValueManager
{
	DECLARE_SINGLE(ValueManager);

public:
	void Init(HWND hwnd);

public:
	void SetHwnd(HWND hwnd) { _hwnd = hwnd; }
	HWND GetHwnd() { return _hwnd; }

	void SetWinSize(Vec2Int size) { _winSize = size; }
	Vec2Int GetWinSize() { return _winSize; }

private:
	// ������ �ڵ�
	HWND _hwnd{};

	// ������ â ������
	Vec2Int _winSize{ DefaultWinSizeX, DefaultWinSizeY };
};

