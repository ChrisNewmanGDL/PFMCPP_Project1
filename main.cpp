#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

 
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: cat
//  action 1: the cat scratches
cat.scratch();
//  action 2: the cat eats
cat.eat();
//  action 3:the cat sleeps
 cat.sleep();
//  2)
//  Noun: footballer
//  action 1: footballer kicks
footballer.kick();
//  action 2: footballer dives
footballer.dive();
//  action 3: footballer scores
 footballer.score();
//  3)
//  Noun: pen
//  action 1: the pen writes
pen.write();
//  action 2: the pen leaks
pen.leak();
//  action 3: the pen runs out of ink
pen.runOutOfInk();
//  4)
//  Noun:mouse
//  action 1: mouse clicks
mouse.click();
//  action 2: mouse clicks and drags
mouse.clickAndDrag();
//  action 3: mouse moves
mouse.move();
//  5) alarmClock
//  Noun: alarm clock
//  action 1:alarm clock ticks
alarmClock.tick();
//  action 2:alarm clock turns hour hand
alarmClock.turnHourHand();
//  action 3:alarm clock rings
alarmClock.ring();
//  6) 
//  Noun: star
//  action 1: star shines
star.shine();
//  action 2:star twinkles
star.twinkle();
//  action 3:star implodes
star.implode();
//  7)
//  Noun: octopus
//  action 1:octopus swims
octopus.swim();
//  action 2:octopus changes skin colour
octopus.changeSkinColour();
//  action 3:octopus retracts tentacle
octopus.retractTentacle();
//  8)
//  Noun: cppCoder
//  action 1:cpp coder creates a function
cppCoder.createFunction();
//  action 2:cppCoder eats lunch 
cppCoder.eatLunch();
//  action 3:cppCoder debugs code
cppCoder.debugCode();
//  9) 
//  Noun: politician
//  action 1:politician gives a speech
politician.giveSpeech();
//  action 2:politician votes
politician.vote();
//  action 3:politician visits constituency
politician.visitConstituency();
//  10) 
//  Noun:child
//  action 1:child plays
child.play();
//  action 2:child learns
child.learn();
//  action 3:child grows
child.grow();


#endif

/*
ChrisNewmanGDL MINOR ALTERATION TO TEST PULL REQUEST PROCESS
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
