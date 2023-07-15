# The Developer's Quest
Welcome to "The Developer's Quest", a text-based adventure game where you embark on an exciting
journey in search of the legendary Pot of Gold!

#### Video Demo: https://youtu.be/00R7aOvhshk

#### Description:
"The Developer's Quest" is a command-line game which I wrote in C that puts your decision-making
skills to the test.
Navigate through a series of interconnected rooms, each with its own unique purpose, as you explore
the virtual world in search of the elusive Pot of Gold.
The game generates a new layout of rooms and randomized directions every time it is restarted. This
ensures a fresh and engaging experience every time.

When you start the game, you will find yoiurself placed in a random room within a house.
Your goasl is to find the room where the Poit of Gold is hidden. However, be aware that the room
with thye pot of gold chages loacation every time you restart the game. This ensures an experience
that is unique every time the game is played.

You will receive descriptions of the current room you are in in text form which allows you to
visualize your surroundings. Your task is to pick a direction, whether it be north, south, east, or
west to move to another room. However, be careful not to hit walls. If you choose a direction that
is not availablein the current room you are in, you will get a prompt that tells you that you have hit
a wall and must choose a different direction.

As you go from one room to the other, be on the lookout for some hints or clues that may lead you to the
hidden Pot of Gold. Once you get to the room with the Pot of Gold, you will be the winner and you will get
a prompt that congratulates you for finding the Pot of Gold.

Another thing is that if you are still playing the game and you are unable to complete it, you can just
type the word 'quit', and you will get a prompt that shows you that the game has ended.

#### Features:
- Engaging text-based gameplay which mentions the specific rooms.
- Randomized layoutand directions for increased replayability.
- Intuitive navigation using directional commands (north, south, east, west).
- Exciting challenge to find the Pot of Gold and emerge as the winner.
- Implementation using the C programming language.

### Usage:
1. Navigate to the folder
cd quest
2. Run the program
./quest
3. Follow the on-screen instructions to play the game

### File Structure:
- 'the-developers-quest.c': The main C source code file containing the game logic and functions.
- 'README.md': The README file providing information about the project.

### Design Choices
In The Developer's Quest, I aimed to create a dynamic and unpredictable gameplay experience by generating a new layout
of rooms and randomized directions every time the game is restarted.
This ensures that players must explore different paths and make strategic decisions to find the elusive Pot of Gold.
Additionally, I chose to implement the game in C for its performance, and portability.

I hope you enjoy playing "The Developer's Quest" and have a thrilling adventure in search of the Pot of Gold.
Have fun exploring the virtual world and putting your decision-making skills to the test!