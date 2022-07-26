## 🐍 A Snake Game written in C++

As a project for our Computer Graphics course, we created this game. We’ve tried our level best to build the project efficiently and correctly and have succeeded in building a better project. After all the testing process, the game is now ready to be played.

#### General idea of the game:

Implement a simple version of the game of "Snake" and provide a window displaying the "High Score".

##### From Wikipedia:

> Snake is a video game that came out in the late 1970s and has maintained popularity since then, becoming somewhat of a classic. The player controls a long, thin creature, resembling a snake, which roams around on a bordered plane, picking up food (or some other item), trying to avoid hitting its own tail or the "walls" that surround the playing area. Each time the snake eats a piece of food, its tail grows longer, making the game increasingly difficult. The user controls the direction of the snake's head (up, down, left, or right), and the snake's body follows. The player cannot stop the snake from moving while the game is in progress.

#### Implementation:

This game is developed in “Code::Blocks” on “Windows” OS. It can run on any IDE that supports C++ (Code::Blocks or Dev-C++) and have Open-GL / GLUT added with the ming-gw compiler. OpenGL Utility Toolkit is used to implement this game. 2D graphics are achieved using transforming functions. With OpenGL, we have drawn a small set of geometric primitives such as points, lines, squares, etc. Translations of snake is involved in the scene, which is being controlled by the user. The Keyboard is the main input device used.

#### Rules of the game:

- The snake starts at the center of the board, moving north (upward).
- The snake moves at a constant speed.
- The snake moves only north, south, east, or west (ignore the versions of the game where the snake can move in curves).
- The snake "moves" by adding a square to its head and simultaneously deleting a square from the tip of its tail.
- "Apples" appear at random locations.
- There is always exactly one apple visible at any given time.
- When the snake "eats" (runs into) an apple, it gets longer.
- (This is hard to describe, so play a couple of games to see what I mean.) When the snake gets longer, say by n squares, it does so by not deleting squares from its tail for the next n moves.
- The game continues until the snake "dies".
- A snake dies by either (1) running into the edge of the board, or (2) by running into its tail.
- The final score is based on the number of apples eaten by the snake.
