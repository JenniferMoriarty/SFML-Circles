// Demonstrate primitve drawing in SFML

#include "SFML/Graphics.hpp"

int main() {
    sf::RenderWindow renderWindow(sf::VideoMode(500,500), "OMG Circle!");

    sf::Event event;

    sf::CircleShape circleShape(100); //radius of circle
    circleShape.setFillColor(sf::Color::Blue); //hmm, what could this do?
    circleShape.setPosition(250.0f, 250.0f); //set position: this is where the top left "corner" will be

    //keep window open until user shuts it down
    while (renderWindow.isOpen()) {
        while (renderWindow.pollEvent(event)) {
            if (event.type == sf::Event::EventType::Closed)
                renderWindow.close();
        }

        //render section-----------------------------------------
        renderWindow.clear();
        renderWindow.draw(circleShape);
        renderWindow.display();
    }
}
