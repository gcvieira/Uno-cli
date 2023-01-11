# UNO-cli

## Summary

Uno, now directly in your terminal!!

This was originally the final assignment for the Programming Laboratory class (2018/1), which has a focus on introduction in programming.

Note that this code was made when I was still an early beginner and have made little to no adjustments after it was done so there is a lot of stuff that can be improved (malloc for example), including the "user interface".

## Dependencies

This was tested using Linux only, so the experience may not be the same on Windows, but should run fine.

- Your preferred GNU/Linux distribution and terminal emulator
- GCC (or any Windows equivalent)

## Compiling and running

    $ git clone https://github.com/gcvieira/Uno-cli
    $ cd Uno-cli
    $ gcc uno.c -o uno
    $ ./uno

## Playing the game

When first launched the game prompts you for your name, then it selects randomly who starts playing, the player (you) or the computer, shuffles the deck, automatically distributes 7 cards to each player and draws the first card to the table.

The game then prints the turn, how many cards are left in the main deck, how many cards the computer has in hand, the active color (1-blue / 2-yellow / 3-green / 4-red), the card on the table and your available deck. You can then select from your deck which card you want to play by entering its respective number OR enter 0 to draw another card from the deck.

When you or the computer get to 0 cards in hand the game is over and it will print who is the winner as well as all players' cards.

## Contributions and future work

Although contributions are welcome, I consider this project done and do not wish to further contribute to it anymore, because in the future I plan to make a newer version, made with Go, of this same game (CLI style as well) and in english rather than portuguese.
