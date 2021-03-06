#include "color.h"
#include "generator.h"

// Получаем цвет от (0, 0, 0) до (255, 255, 255)
sf::Color getColor(PRNG &generator)
{
    constexpr int minColorNumber = 0;
    constexpr int maxColorNumber = 255;

    return sf::Color(
        random(generator, minColorNumber, maxColorNumber),
        random(generator, minColorNumber, maxColorNumber),
        random(generator, minColorNumber, maxColorNumber));
}
