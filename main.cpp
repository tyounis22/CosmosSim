#include "raylib.h"
#include "Particle.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Cosmos Sim: Earth Orbit");
    SetTargetFPS(60);

    // --- 1. LOAD FONT ---
    // We load it slightly larger (size 96) to keep it crisp, then scale it down when drawing.
    // Make sure "Arial.ttf" is in your cmake-build-debug folder!
    Font myFont = LoadFontEx("AirforceFont.ttf", 96, 0, 0);

    // Smooth out the font texture (so it doesn't look pixelated)
    SetTextureFilter(myFont.texture, TEXTURE_FILTER_BILINEAR);

    // Physics Setup
    Vec3 sunPosition(0, 0, 0);
    Vec3 startPos(200, 0, 0);
    Vec3 startVel(0, 3.45, 0);
    Particle earth(startPos, startVel, 1.0);

    double days = 0.0;

    while (!WindowShouldClose()) {

        double dt = 1.0;

        // Update Time
        days += 1.0;

        // Physics Logic
        Vec3 direction = sunPosition.subtract(earth.position);
        double distance = direction.magnitude();

        if (distance > 5.0) {
            direction.normalize();
            double strength = 2380.0 / (distance * distance);
            Vec3 force = direction.scale(strength);
            earth.applyForce(force);
        }

        earth.update(dt);

        // Drawing Logic
        BeginDrawing();
            ClearBackground(BLACK);

            int centerX = screenWidth / 2;
            int centerY = screenHeight / 2;

            // Draw Sun
            DrawCircle(centerX, centerY, 30, GOLD);

            // Draw Earth
            DrawCircle(centerX + (int)earth.position.x,
                       centerY + (int)earth.position.y,
                       10, BLUE);

            // --- 2. DRAW TEXT WITH CUSTOM FONT ---

            // Draw Title (Top Left)
            // DrawTextEx takes: Font, Text, Position(Vector2), Size, Spacing, Color
            DrawTextEx(myFont, "Earth Orbit Simulation", {10, 10}, 35, 2, WHITE);

            // Draw Day Counter (Top Right)
            const char* dayText = TextFormat("Days: %0.0f", days);
            DrawTextEx(myFont, dayText, {650, 10}, 12, 2, WHITE);

        EndDrawing();
    }

    // --- 3. UNLOAD FONT ---
    UnloadFont(myFont); // Clean up memory before quitting

    CloseWindow();
    return 0;
}