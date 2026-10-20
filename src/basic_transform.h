// maybe something here...
#ifndef BASIC_TRANSFORM_H
#define BASIC_TRANSFORM_H

#include "vector_util.h"
#include <SFML/System/Vector2.hpp>

struct BasicTransform {
    // methods...

    BasicTransform(const sf::Vector2f& scale = sf::Vector2f(1, 1),
                   const sf::Vector2f& translation = sf::Vector2f(0, 0))
        : scale(scale), translation(translation) {}

    sf::Vector2f applyPoint(const sf::Vector2f& p) const {
        return p * scale + translation;
    }

    sf::Vector2f applyVector(const sf::Vector2f& p) const {
        return p * scale;
    }

    bool operator==(const BasicTransform& other) const {
        return scale == other.scale && translation == other.translation;
    }

    sf::Vector2f scale;
    sf::Vector2f translation;
};

#endif
