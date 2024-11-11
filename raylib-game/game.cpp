#include "raylib.h"

int main(void)
{
	InitWindow(1280, 720, "window");
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}

	RCloseWindow();
	return 0;
}