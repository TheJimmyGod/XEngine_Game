#ifndef MELEE_ENEMY_BULLET_HEADER_H_
#define MELEE_ENEMY_BULLET_HEADER_H_

#include <XEngine.h>
#include "TheFighter.h"
using namespace X;

class EnemyBullet
{
public:
	EnemyBullet() {}
	EnemyBullet(bool active, int sprite, Math::Vector2 pos, Math::Vector2 vel);
	~EnemyBullet() {}

	void Update(float deltaTime);
	void Render();

	void Fire(const Math::Vector2& pos, const Math::Vector2& vel);
	void Destroy();

	bool IsActive() const { return mIsActive; }
	Math::Circle GetBoundingCircle() const { return Math::Circle(mPosition, 10.0f); }

private:
	bool mIsActive;
	int mSpriteNum;
	Math::Vector2 mPosition;
	Math::Vector2 mVelocity;
	const char* EnemyBulletTexture = "eBullet.png";
};
#endif // !MELEE_ENEMY_BULLET_HEADER_H_