#include <SFML/Graphics.hpp>

// start game main()
int main()
{
	sf::Texture background;
	sf::Sprite spriteBackground;

	if (!background.loadFromFile("graphics/background.png"))
		return -1;
	spriteBackground.setTexture(background);

	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Timber!!!");
	 while (window.isOpen())
	 {
	    // Event processing
	    sf::Event event;
	    while (window.pollEvent(event))
	    {
	        // Request for closing the window
	        if (event.type == sf::Event::Closed)
	            window.close();
	    }
	
	    // Clear the whole window before rendering a new frame
	    window.clear();

		spriteBackground.setPosition(0, 0);
		window.draw(spriteBackground);

	    // End the current frame and display its contents on screen
	    window.display();
	 }
	return 0;
}