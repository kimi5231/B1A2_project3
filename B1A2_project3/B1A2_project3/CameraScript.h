#pragma once
#include "MonoBehaviour.h"

class CameraScript : public MonoBehaviour
{
public:
	CameraScript();
	virtual ~CameraScript();

	virtual void LateUpdate() override;

	// ī�޶� ���� �÷��̾�
	void SetPlayer(const std::shared_ptr<GameObject>& player) { _player = player; }
	std::shared_ptr<GameObject> GetPlayer() const { return _player; }

private:
	float _speed = 100.f;
	std::shared_ptr<GameObject> _player = nullptr;
};