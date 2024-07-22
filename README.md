# Minitalk-Client-Server
Minitalk is a client-server communication program which uses signal handling and interprocess communication in C. I've coded a small data exchange program using UNIX signals SIGUSR1 and SIGUSR2 to communicate between a client and a server.
## Key Features
- Server Initialization: The server starts first and prints its PID.
- Client Parameters: The client takes the server's PID and a string to send.
- Message Transmission: The client sends the string to the server using UNIX signals. The server promptly prints the received string.
## 👀 YouTube Video: Code-Princess/Minitalk-Client-Server/Mein neues Projekt/Signalübertragung/Signalverarbeitung/C-Code
<!-- YouTube video cards from https://github.com/DenverCoder1/github-readme-youtube-cards -->
<!-- https://ytcards.demolab.com/?id=<video ID>&title=<video+title>&lang=en&timestamp=<video publish date in Unix time format>&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&max_title_lines=1&width=250&border_radius=5&duration=<video duration in seconds> "<video title>") -->
<!-- BEGIN YOUTUBE-CARDS -->
[![Code-Princess/Minitalk-Client-Server/Mein neues Projekt/Signalübertragung/Signalverarbeitung/C-Code](https://ytcards.demolab.com/?id=shKlsVZ56tw&title=Code-Princess/Minitalk-Client-Server/Mein+neues+Projekt/Signalübertragung/Signalverarbeitung/C-Code&lang=en&timestamp=1728597600&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&max_title_lines=1&width=850&border_radius=5&duration=284 "Code-Princess/Minitalk-Client-Server/Mein neues Projekt/Signalübertragung/Signalverarbeitung/C-Code")](https://youtu.be/shKlsVZ56tw?si=8judifi_2iWpBEGg)
<!-- END YOUTUBE-CARDS -->
## Prerequisites
Please note that this program is only compatible with Linux or macOS. Ensure that you have a C-compiler e.g. cc installed on your operating system.
## Installation
To install the project follow these steps in your terminal:
```
git clone git@github.com:Code-Princess/minitalk-client-server.git
cd minitalk-client-server
make
```
This creates two executables: client and server.
## Run the program
To run the program, use this command in your terminal:
```
./server
```
This starts the server to get its PID (Process ID). The server will display its PID on the console. 
Then, run the client with the server's PID and the message to be sent:
```
./client [Server PID] [Message]
```
