# plurality-cs50
Console application that implements a plurality election count<br>
Competed as part of studying CS50 - Introduction to Computer Science from Harvard University<br><br>

Perhaps the simplest way to hold an election, though, is via a method commonly known as the “plurality vote” (also known as “first-past-the-post” or “winner take all”). In the plurality vote, every voter gets to vote for one candidate. At the end of the election, whichever candidate has the greatest number of votes is declared the winner of the election.<br>

Implement a program that runs a plurality election, per the below.<br>
$ ./plurality Alice Bob<br>
Number of voters: 3<br>
Vote: Alice<br>
Vote: Bob<br>
Vote: Alice<br>
Alice<br>

$ ./plurality Alice Bob Charlie<br>
Number of voters: 4<br>
Vote: Alice<br>
Vote: Bob<br>
Vote: Charlie<br>
Vote: Alice<br>
Alice<br><br>

$ ./plurality Alice Bob Charlie<br>
Number of voters: 5<br>
Vote: Alice<br>
Vote: Charlie<br>
Vote: Bob<br>
Vote: Bob<br>
Vote: Alice<br>
Alice<br>
Bob<br>


