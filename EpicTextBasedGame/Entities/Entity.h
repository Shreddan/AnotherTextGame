#pragma once
class Entity
{
public:
	 Entity();
	 ~Entity();

	 virtual void GetPos() = 0;
	 virtual void SetPos() = 0;
	 virtual void Interact() = 0;

	 enum class forf
	 {
		 Friendly = 0,
		 Recruitable = 1,
		 Foe = 2,
		 ToughFoe = 3,
		 Boss = 4
	 };

};

