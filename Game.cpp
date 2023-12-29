#define isDown(b) input->buttons[b].isDown
#define pressed(b) (input->buttons[b].isDown && input->buttons[b].changed)
#define released(b) (!input->buttons[b].isDown && input->buttons[b].changed)

float playerPositionX = 0.f;
float playerPositionY = 0.f;

internalVariable void simulateGame(Input* input) {
	clearScreen(0xFF8C00);
	if (pressed(BUTTON_UP)) playerPositionY += 1.f;
	if (pressed(BUTTON_DOWN)) playerPositionY -= 1.f;
	if (pressed(BUTTON_LEFT)) playerPositionX -= 1.f;
	if (pressed(BUTTON_RIGHT)) playerPositionX += 1.f;

	drawRectangle(playerPositionX, playerPositionY, 10, 10, 0xFF4500);
	drawRectangle(30+ playerPositionX, 30+ playerPositionY, 10, 10, 0xFF0000);
	drawRectangle(20+ playerPositionX, 20+ playerPositionY, 10, 10, 0x00FFFF);
}
