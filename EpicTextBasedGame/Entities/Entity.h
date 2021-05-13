#pragma once
class Entity
{
public:
	 Entity();
	 ~Entity();

	 virtual void GetPos() = 0;
	 virtual void SetPos() = 0;
	 virtual void Interact() = 0;
};

