# Minitalk-Client-Server
Minitalk is a client-server communication program which uses signal handling and interprocess communication in C. I've coded a small data exchange program using UNIX signals SIGUSR1 and SIGUSR2 to communicate between a client and a server.
## Key Features
- Server Initialization: The server starts first and prints its PID.
- Client Parameters: The client takes the server's PID and a string to send.
- Message Transmission: The client sends the string to the server using UNIX signals. The server promptly prints the received string.
## 👀 YouTube Video: **TODO**
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
