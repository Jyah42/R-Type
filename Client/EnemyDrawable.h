#pragma once

#include "IDrawable.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Obj.h"

class EnemyDrawable : public IDrawable
{
private:
	sf::Clock cl_;
	sf::RenderWindow* win_;
	sf::Sprite sprite_;
	float width_;
	float height_;
	int posX_;
	int posY_;
	float elapsedTime_;

public:
	EnemyDrawable(sf::Image const& img, sf::RenderWindow* ptr);
	virtual ~EnemyDrawable(void);
	virtual	void animate(float angle);
	virtual	void draw();
	virtual float getTimeInMs();
	virtual void setPosX(int x);
	virtual void setPosY(int y);
	virtual bool EndingAnim() const;

public:
	static IDrawable *factory(sf::Image const& img, sf::RenderWindow* ptr, int) { return new EnemyDrawable(img, ptr); } 
};

