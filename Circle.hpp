#pragma once

namespace cr
{
    // ������� ����� Circle
    class Circle : public Drawable
    {
    public:

        Circle(float radius = 0.f, Color color = Color::White) : m_shape(radius) {};

        void setPosition(float x, float y);

        Vector2f getPosition() const;
       
        float getRadius() const;

        CircleShape& GetCircle();

        void draw(RenderTarget& target, RenderStates states) const override; // ��������������� ������
            
    protected:
        CircleShape m_shape;
    };
}