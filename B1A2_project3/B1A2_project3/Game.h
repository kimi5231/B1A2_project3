#pragma once

class Game
{
public:
	void Init(const WindowInfo& info);
	void Update();

private:
	HWND _hwnd = {};	// ������ �ڵ� ��ȣ
	HDC _hdc = {};	// ��ȭ�� ��ȣ
};

