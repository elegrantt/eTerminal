# eTerminal
**Welcome to eTerminal -- a terminal inside your terminal!**
**IMPORTANT:** This project was just C++ practice for me, and my first actual C++ project. If you're actually downloading this, take it as a joke, and expect everything to mess up.
## Installation Guide:
**Requirements:**
- GCC -- Most Linux computers have this pre-installed. Check with `gcc --version`. If something is displayed, move on. Otherwise, look up how to install GCC on your distribution. MacOS is similar. Windows is a whole other story.
## Setup
1. Download the `eTerm` folder (download from releases).
2. Move the `eTerm` folder into your `Documents` folder.
3. Extract the ZIP file and delete the archive.
4. ***Optional: setup an alias that will run eTerminal with `eterm`.*** If this gets too complicated, run the code with `g++ -std=c++23 main.cpp -o output && ./output` every time (or at least on Linux. Not sure about Windows or Mac, though Mac is again probably very similar.). **Note: you must be in the directory containing the main.cpp file. If you moved it to Documents, your path would be `~/Documents/eTerm`, which you can enter with `cd ~/Documents/eTerm`.
### Linux
1. Edit your bash configuration file: `nano ~/.bashrc`
2. Paste this near the bottom:
```
alias runcpp='g++ -std=c++23 main.cpp -o output && ./output'
alias eterm='cd ~/Documents/eTerm && runcpp'
```
6. Save: Ctrl+O, then Enter.
7. Exit: Ctrl+X
### MacOS
It should be similar to Linux, but just use "bash" before every command, since Zsh is the default Shell.
### Windows
I found this from a Google AI Overview (search query: "how to create a custom command (alias) in powershell or cmd and save it permanently"), but **USE WITH CAUTION, as I HAVE NOT TESTED THIS.**


PowerShell: 
Create the Alias. 
   Set-Alias -Name <alias_name> -Value <command>

For example, to create an alias ll for Get-ChildItem -la: 
   Set-Alias -Name ll -Value "Get-ChildItem -la"


• Save Permanently: 
	• Open your PowerShell profile: 



     notepad $PROFILE

• Add the Set-Alias command from step 1 to the profile file. 
• Save and close the file. 
• To apply the changes immediately, run: 

     . $PROFILE 

CMD: 

• Create the Alias: 
	• Open the Registry Editor (regedit.exe) 
	• Navigate to the following key: 



     HKEY_CURRENT_USER\Software\Microsoft\Command Processor

• Right-click on the "Command Processor" key and select "New" -> "String Value" 
• Name the new value as the alias you want to create (e.g., ll) 
• Double-click the new value and enter the full command as the value data (e.g., dir /s /b) 

• Save Permanently: 
	• The alias is now permanently saved in the registry and will be available in all future CMD sessions. 

Important Note:

• Be careful when creating aliases to avoid overwriting existing commands. 
• Use descriptive alias names to make your scripts more readable. 


Generative AI is experimental.
