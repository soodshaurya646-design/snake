# Snake Game in C++

A classic Snake Game built from scratch using **C++** and the **raylib** graphics library.

This project is part of my journey learning C++ programming, game development, and data structures.

## Features

- Snake movement using arrow keys
- Grid-based movement with adjustable speed
- Randomly generated food
- Snake grows when food is eaten
- Direction handling to prevent immediate reversal
- Snake body managed using C++ vectors and structs

## Technologies Used

- **C++** — Game logic and data structures
- **raylib** — Graphics, keyboard input, and game window
- **VS Code** — Development environment
- **MinGW-w64 (GCC)** — Compilation

## How to Run

### Prerequisites

Make sure you have:

- A C++ compiler (G++)
- raylib installed and configured

### Compile

On Windows, open a terminal in the project directory and run:

```bash
g++ snake.cpp -o snake.exe -lraylib -lopengl32 -lgdi32 -lwinmm
```

### Run

```powershell
.\snake.exe
```

## Controls

| Key | Action |
|---|---|
| ↑ | Move up |
| ↓ | Move down |
| ← | Move left |
| → | Move right |

## How It Works

The snake is represented using a `vector` of `Segment` structures, where each segment stores its X and Y coordinates.

A timer controls movement independently of the frame rate. Each time the timer reaches the movement interval, the body segments follow the previous segment, and the head moves in the current direction.

When the snake eats food, a new segment is added to the vector, increasing its length.

## Planned Features

- [ ] Wall collision detection
- [ ] Self-collision detection
- [ ] Game-over screen
- [ ] Restart functionality
- [ ] Score counter
- [ ] Improved visuals

## Project Status

**Work in Progress**

The core gameplay is functional. Collision detection, scoring, and game-over mechanics will be added in future updates.

---

*Built as a personal C++ learning project.*