#pragma once
#include <Box2D/Box2D.h>
#include <SFML/Graphics.hpp>
#include "MathHelper.h"

class Ball
{
private:

   b2Body* _pBody;
   b2BodyDef _bodyDef;
   b2CircleShape _bodyShape;
   b2FixtureDef _fixtureDef;
   
   sf::Sprite _sprite;

public:

   Ball(float radius);
   
   Ball(sf::Texture& texture, float initX, float initY);
   
   Ball();
   
   void SetWorld(b2World& world);
   
   b2Body* GetPhysicsBody(); 
      
   void Update(sf::Event e, sf::Time dt);

   void Draw( sf::RenderWindow& window, sf::Time dt );

   sf::Sprite& GetSprite();

};
