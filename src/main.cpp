#include "raylib.h"
#include <iostream>

int main() {
  std::cout << "Hello, from my-raylib-template!\n";

  SetConfigFlags(FLAG_WINDOW_HIDDEN);
  InitWindow(640, 480, "Template");
  SetWindowPosition(400, 400);
  ClearWindowState(FLAG_WINDOW_HIDDEN);
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(WHITE);

    // game logic here

    EndDrawing();
  }
}
