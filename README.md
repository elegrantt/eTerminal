# eTerminal
**Welcome to eTerminal -- a terminal inside your terminal!**
**IMPORTANT:** This project was just C++ practice for me, and my first actual C++ project. If you're actually downloading this, take it as a joke, and expect everything to mess up.
## Installation Guide:
**Requirements:**
- GCC
- Linux =) I don't know if I will ever add Windows or MacOS support.
**Setup**
1. Download the `eTerm` folder (download from releases).
2. Move the `eTerm` folder into your `Documents` folder.
3. Edit your bash configuration file: `nano ~/.bashrc`
4. Paste this near the bottom:
`alias runcpp='g++ -std=c++23 main.cpp -o output && ./output'
alias eterm='cd ~/Documents/eTerm && runcpp'`
5. Save: Ctrl+O, then Enter.
6. Exit: Ctrl+X

Now you can type `eterm` at any time to access eTerminal!
Feel free to move the `main.cpp` file outside of the eTerm folder (since GitHub will generate it's own folder anyway if you download the ZIP or clone the repo) and update the aliases in `~/.bashrc` accordingly.
**Again, this project is not meant to be taken seriously. You have been warned.**
