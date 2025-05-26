## This FSM has the following states:

Start is the state in which the game waits for the player to press the ready to play button.
Spawn is the state in which the next frog is created.
Moving is the main game state with user input processing - moving the frog along the lane left/right or jumping forward/backward.
Shifting is the state that occurs after the timer expires, which shifts all objects on the lanes to the right, along with the frog.
Collision is a state that occurs if the frog hits the water after jumping, or if the frog is outside the playing field after shifting logs.
Reached the other side is the state that occurs when a frog reaches the  other side.
Game over is the state that occurs after reaching the other side of the river or the last frog dies.

![frogger](frogger.JPG)