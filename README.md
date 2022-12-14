# Sending_A_Song_Lyrics_To_A_File

###### Kyi Lei Aye
###### (10/27/2022)

### Overview
Sending output data (song lyrics in this case) from a program (C++ program in this case) to a file (.txt file in this case) with using objects, classes, and member functions

### Problem Definition Phases
1. Get song lyrics from some online sources
2. Create a .txt file with writing sytax in the program
3. Output stream and its class needed to be created for sending the data to the file
4. Send the lyrics to that file

### Implementation Phases
1. Include necessary directives for I/O stream 
2. Declare an object and its type(class of that object)
3. Connect the file that is desired to be created to the object by calling the member function "open" with the argument of the external file name("songLyrics.txt" in this case)
4. Test with the fail() member function that the file is opened successfully or not to receive data
5. Write data(lyrics of the song) to the file
6. Close the file

### Reference
1. "**Problem Solving with C++**" by Walter Savitch, Chapter 6
   
2. "https://www.google.com/search?client=safari&rls=en&q=healtheworld+lyrics&spell=1&sa=X&ved=2ahUKEwiNrdHwzYH7AhUdMEQIHaucCVwQBSgAegQIBhAB&biw=1440&bih=820&dpr=2"

3. "https://www.youtube.com/watch?v=BWf-eARnf6U"
