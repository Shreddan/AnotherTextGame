#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::setPos(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Player::onSave()
{
}

void Player::onLoad()
{

}

std::tuple<int, int, int> Player::getPos()
{
    return std::make_tuple(this->a, this->x, this->y);
}

std::string Player::getName()
{
    return this->name;
}

int Player::getHPMax()
{
    return this->hpMax;
}

int Player::getHP()
{
    return this->hp;
}

int Player::GetMPMax()
{
    return this->mpMax;
}

int Player::getMP()
{
    return this->mp;
}

int Player::getStamMax()
{
    return this->stamMax;
}

int Player::getStamina()
{
    return this->stamina;
}

int Player::getExp()
{
    return this->exp;
}

int Player::getTNL()
{
    return this->tilNext;
}
