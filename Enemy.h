#pragma once
class Enemy
{
private:

	static bool isAlive;

public:

	Enemy() = default;
	~Enemy() = default;

	/// <summary>
	/// 初期化処理
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw();

private:

	/// <summary>
	/// 敵を殺す
	/// </summary>
	void Kill();
};