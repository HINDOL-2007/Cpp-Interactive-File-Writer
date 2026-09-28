# ⌨️ C++ Interactive File Writer

## 📖 About the Project
This project expands on standard File I/O operations by introducing dynamic user input. Instead of relying solely on hardcoded variables, the program prompts the user via the console, captures their full input string, and logs it persistently to a physical text file on the hard drive.

## ✨ Features
*   **Dynamic Input Capture:** Utilizes `getline(cin, variable)` to safely capture multi-word user input from the console.
*   **Stream Concatenation:** Successfully writes both hardcoded system strings and dynamic user variables into the same `ofstream` buffer sequentially.
*   **Persistent Storage:** Generates a `test.txt` file in the working directory to preserve the user's session data after execution terminates.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Standard Input (`cin`), Output File Streams (`ofstream`), String Manipulation.
