#pragma once

#include "Primitives/BoxObject.hpp"


class AsteroidObject : public BoxObject
{
public:
    AsteroidObject(btVector3 halfSize);
    ~AsteroidObject();

    CollisionResult Collide(ObjectType otherObj) override;
};
