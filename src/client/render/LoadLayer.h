// Generated by dia2code
#ifndef RENDER__LOADLAYER__H
#define RENDER__LOADLAYER__H

#include <SFML/Graphics.hpp>

namespace sf {
  class Texture;
};
namespace state {
  class State;
}


namespace render {

  /// class LoadLayer - 
  class LoadLayer {
    // Attributes
  public:
    sf::VertexArray quads;
    sf::Texture texture;
    // Operations
  public:
    bool loadTextures (state::State& state, sf::Texture& textureTileset, sf::Vector2u tileSize, unsigned int width, unsigned int height);
    void draw (sf::RenderTarget& target, sf::RenderStates states);
    bool loadCharacters (state::State& state, sf::Texture& textureTileset, sf::Vector2u tileSize, unsigned int width, unsigned int height);
    // Setters and Getters
  };

};

#endif