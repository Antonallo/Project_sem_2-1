#pragma once

namespace pl
{
    // �������� ����� PlayerCircle
    class PlayerCircle : public Circle
    {
    public:
        PlayerCircle() : Circle(30.f, Color::Green) {}

        void move(float x, float y);

        void handleInput();
    };
}