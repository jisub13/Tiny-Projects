import random, time, shelve
opponent = ["rock", "paper", "scissors"]
score = 0
highscores = shelve.open("High Scores")
ss = highscores['savescores']
n = highscores['names']
ss = list(highscores['savescores'])
n = list(highscores['names'])
while True:
    outcome = input("Rock, Paper, Scissors! ")
    outcome = outcome.lower()
    random.shuffle(opponent)
    opponentout = opponent[1]
    if outcome == opponentout:
        print("Tie!")
        print("Score: " + str(score))
        continue
    elif outcome == "rock" and opponentout == "scissors":
        print("You won!")
        score += 1
        print("Score: " + str(score))
        continue
    elif outcome == "scissors" and opponentout == "paper":
        print("You won!")
        score += 1
        print("Score: " + str(score))
        continue
    elif outcome == "paper" and opponentout == "rock":
        print("You won!")
        score += 1
        print("Score: " + str(score))
    else:
        print("You lost...")
        print("Score: " + str(score))
        again = input("Play again? [y/n]")
        if again.lower() == "y":
            for i in ss:
                if score > ss[i]:
                    ss.insert(i, score)
                    ss.pop()
                    player = input("Enter Name: ")
                    n.insert(i, player)
                    highscores['savescores'] = ss
                    highscores['names'] = n
                    break
                else:
                    break
            score = 0
            continue
        else:
            for i in ss:
                if score > ss[i]:
                    ss.insert(i, score)
                    ss.pop()
                    player = input("Enter Name: ")
                    n.insert(i, player)
                    highscores['savescores'] = ss
                    highscores['names'] = n
                    break
                else:
                    break
            break
for i in ss:
    for v in n:
        print(i + ": " + v)
time.sleep(3)
