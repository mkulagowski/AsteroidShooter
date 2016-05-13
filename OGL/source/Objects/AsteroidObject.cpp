#include "AsteroidObject.hpp"


AsteroidObject::AsteroidObject(btVector3 halfSize)
    : BoxObject(halfSize)
{
    mType = ObjectType::Asteroid;
}

AsteroidObject::~AsteroidObject()
{
}

CollisionResult AsteroidObject::Collide(ObjectType otherObj)
{
    switch (otherObj)
    {
        case ObjectType::Player:
            return CollisionResult::Reinit;
        case ObjectType::Projectile:
            mToDelete = true;
            return CollisionResult::Score;
        case ObjectType::Wall:
            mToDelete = true;
        default:
            return CollisionResult::None;
    }
}