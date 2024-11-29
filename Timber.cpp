#include <SFML/Graphics.hpp>

// start game main()
int main()
{
	const float BG_HOR_POS{ 0 };
	const float BG_VER_POS{ 0 };
	
	const float TREE_HOR_POS{ 810 };
	const float TREE_VER_POS{ 0 };

	bool beeActive = false;
	float beeSpeed = 0.0f;

	bool cloud1Active = false;
	float cloud1Speed = 0.0f;
	bool cloud2Active = false;
	float cloud2Speed = 0.0f;
	bool cloud3Active = false;
	float cloud3Speed = 0.0f;


	sf::Texture background;
	sf::Sprite spriteBackground;

	sf::Texture player;
	sf::Sprite spritePlayer;

	sf::Texture tree;
	sf::Sprite spriteTree;

	sf::Texture bee;
	sf::Sprite spriteBee;

	sf::Texture cloud;
	sf::Sprite sprite1Cloud;
	sf::Sprite sprite2Cloud;
	sf::Sprite sprite3Cloud;

	sf::VideoMode vm(1920, 1080);


	if (!background.loadFromFile("graphics/background.png"))
		return -1;
	spriteBackground.setTexture(background);

	if (!player.loadFromFile("graphics/player.png"))
		return -1;
	spritePlayer.setTexture(player);

	if (!tree.loadFromFile("graphics/tree.png"))
		return -1;
	spriteTree.setTexture(tree);

	if (!bee.loadFromFile("graphics/bee.png"))
		return -1;
	spriteBee.setTexture(bee);

	if (!cloud.loadFromFile("graphics/cloud.png"))
		return -1;
	sprite1Cloud.setTexture(cloud);
	sprite2Cloud.setTexture(cloud);
	sprite3Cloud.setTexture(cloud);


	spriteBackground.setPosition(BG_HOR_POS, BG_VER_POS);
	spritePlayer.setPosition(640, 640);
	spriteTree.setPosition(TREE_HOR_POS, TREE_VER_POS);
	spriteBee.setPosition(0, 800);
	sprite1Cloud.setPosition(0, 0);
	sprite2Cloud.setPosition(0, 250);
	sprite3Cloud.setPosition(0, 500);

	sf::RenderWindow window(vm, "Timber!!!");
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

		window.draw(spriteBackground);

		window.draw(spritePlayer);

		window.draw(spriteTree);

		window.draw(spriteBee);

		window.draw(sprite1Cloud);
		window.draw(sprite2Cloud);
		window.draw(sprite3Cloud);

	    // End the current frame and display its contents on screen
	    window.display();
	 }
	return 0;
}