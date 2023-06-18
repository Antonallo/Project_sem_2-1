#pragma once
#include"Circle.hpp"

namespace game
{
    // �������� ����� PlayerCircle
    class PlayerCircle : public Circle
    {
    public:
        PlayerCircle();

        void move(float x, float y);

        void handleInput();
    };
}