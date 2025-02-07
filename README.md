# eTerminal
**Welcome to eTerminal -- a terminal inside your terminal!**
**IMPORTANT:** This project was just C++ practice for me, and my first actual C++ project. If you're actually downloading this, take it as a joke, and expect everything to mess up.
## Installation Guide:
**Requirements:**
- GCC -- Most Linux computers have this pre-installed. Check with `gcc --version`. If something is displayed, move on. Otherwise, look up how to install GCC on your distribution. MacOS is similar. Windows is a whole other story.
## Setup
1. Download the `eTerm` folder (download from releases).
2. Move the `eTerm` folder into your `Documents` folder.
3. ***Optional: setup an alias that will run eTerminal with `eterm`.*** If this gets too complicated, run the code with `g++ -std=c++23 main.cpp -o output && ./output` every time (or at least on Linux. Not sure about Windows or Mac, though Mac is again probably very similar.).
### Linux
1. Edit your bash configuration file: `nano ~/.bashrc`
2. Paste this near the bottom:
`alias runcpp='g++ -std=c++23 main.cpp -o output && ./output'
alias eterm='cd ~/Documents/eTerm && runcpp'`
6. Save: Ctrl+O, then Enter.
7. Exit: Ctrl+X\
### MacOS
It should be similar to Linux, but just use "bash" before every command, since Zsh is the default Shell.
### Windows
1. Look up how to create an alias in PowerShell or Command Prompt.
2. Follow the steps above but instead replace what is needed with the Windows version.
   You're on you're own from now :)
