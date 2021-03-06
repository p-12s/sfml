#pragma once
#include <SFML/Graphics.hpp>

enum class GhostId
{
    BLINKY,
    PINKY,
    INKY,
    CLYDE,
};

enum struct CellCategory
{
    WALL,
    ROAD,
};

struct Cell
{
    CellCategory category;
    sf::RectangleShape bounds;
};

struct Field
{
    size_t width = 0;
    size_t height = 0;
    Cell *cells = nullptr;
};

sf::Vector2f getPackmanStartPosition();
sf::Vector2f getGhostStartPosition(GhostId ghostId);

void initializeField(Field &field);
void drawField(sf::RenderWindow &window, const Field &field);
bool checkFieldWallsCollision(const Field &field, const sf::FloatRect &oldBounds, sf::Vector2f &movement);
void destroyField(Field &field);