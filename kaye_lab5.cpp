//include the library with header name iostream for input values from keyboard and output to screen
#include <iostream>
//include the library with header name fstream which includes the definition of class
#include <fstream>
//include the library with header name cstdlib for exit statement
#include <cstdlib>

int main() {
    using namespace std;

    //declaring an object named "myfile" with the type of the object or class "ofstream"
    ofstream myfile;

    //connecting the file named "songLyrics.txt" to the stream which allows the flow of character input/output or any data
    //calling the member function named "open" with the name of the object "myfile"
    //the member function "open" is used for sending the output to the file "songLyrics.txt"
    myfile.open ("songLyrics.txt");

    //testing that opening the file for sending the output is failed or not
    //if failed, the program will be exited
    if(myfile.fail()){
        myfile << "Opening the file for sending the output is failed!";
        exit(1);
    }

    //data that would be sent to the file
    myfile << "                             Heal The World\n";
    myfile << "                          Song by Michael Jackson";
    myfile << endl;
    myfile << "Lyrics\n";
    myfile << endl;
    myfile  <<  "There's a place in your heart\n"
                "And I know that it is love\n"
                "And this place it was brighter than tomorrow\n"
                "And if you really try\n"
                "You'll find there's no need to cry\n"
                "In this place you'll feel there's no hurt or sorrow\n\n"
                "There are ways to get there\n"
                "If you care enough for the living\n"
                "Make a little space\n"
                "Make a better place\n\n"
                "Heal the world\n"
                "Make it a better place\n"
                "For you and for me, and the entire human race\n"
                "There are people dying\n"
                "If you care enough for the living\n"
                "Make a better place for you and for me\n\n"
                "If you want to know why\n"
                "There's love that cannot lie\n"
                "Love is strong\n"
                "It only cares of joyful giving\n"
                "If we try we shall see\n"
                "In this bliss we cannot feel\n"
                "Fear of dread, we stop existing and start living\n\n"
                "Then it feels that always\n"
                "Love's enough for us growing\n"
                "Make a better world\n"
                "So make a better world\n\n"
                "Heal the world\n"
                "Make it a better place\n"
                "For you and for me, and the entire human race\n"
                "There are people dying\n"
                "If you care enough for the living\n"
                "Make a better place for you and for me\n\n"
                "And the dream we were conceived in will reveal a joyful face\n"
                "And the world we once believed in will shine again in grace\n"
                "Then why do we keep strangling life\n"
                "Wound this earth, crucify its soul?\n"
                "Though it's plain to see, this world is heavenly\n"
                "Be god's glow\n\n"
                "We could fly so high\n"
                "Let our spirits never die\n"
                "In my heart I feel you are all my brothers\n"
                "Create a world with no fear\n"
                "Together we cry happy tears\n"
                "See the nations turn their swords into plowshares\n\n"
                "We could really get there\n"
                "If you cared enough for the living\n"
                "Make a little space\n"
                "To make a better place\n\n"
                "Heal the world\n"
                "Make it a better place\n"
                "For you and for me, and the entire human race\n"
                "There are people dying\n"
                "If you care enough for the living\n"
                "Make a better place for you and for me\n"
                "Heal the world\n"
                "Make it a better place\n"
                "For you and for me, and the entire human race\n"
                "There are people dying\n"
                "If you care enough for the living\n"
                "Make a better place for you and for me\n\n"
                "Heal the world (heal the world)\n"
                "Make it a better place\n"
                "For you and for me, and the entire human race\n"
                "There are people dying\n"
                "If you care enough for the living\n"
                "Make a better place for you and for me\n\n"
                "There are people dying\n"
                "If you care enough for the living\n"
                "Make a better place for you and for me\n\n"
                "There are people dying\n"
                "If you care enough for the living\n"
                "Make a better place for you and for me\n\n"
                "You and for me (for a better place)\n"
                "You and for me (make a better place)\n"
                "You and for me (make a better place)\n"
                "You and for me (heal the world we live in)\n"
                "You and for me (save it for our children)\n"
                "You and for me (heal the world we live in)\n"
                "You and for me (save it for our children)\n"
                "You and for me (heal the world we live in)\n"
                "You and for me (save it for our children)\n"
                "You and for me (heal the world we live in)\n"
                "You and for me (save it for our children)";
    myfile << endl;

    //closing the file 
    myfile.close();
    return 0;
}
