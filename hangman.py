from ps3_hangman import*
print 'Welcome to the game, Hangman!'
print "I am thinking of a word that is '+str(len(secretWord)+' letters long."
print "-"*12
lettersGuessed = []
number = 8
while number > 0:
    print 'You have ' + str(number)+' guesses left'
    availableLetters = getAvailableLetters(lettersGuessed)
    print 'Available letters: '+ availableLetters
    word = secretWord
    guess = raw_input('Please guess a letter: ')
    guess = guess.lower()
    letterGuessed.append(guess)
    if guess in availableLetters:
        if isWordGuessed(secretWord,letterGuessed):
            getGuessedWord = getGuessedWord(secretWord,letterGuessed)
            print 'Good guess:' +getGuessedWord
            if getGuessedWord == word:
                print'-'*12
                print 'Congratulations, You won!'
                break
        number -= 1
    print 'Oops! You\' ve already guessed that letter :' +getGuessedWord(secretWord,letterGuessed)
if number == 0:
    print 'Sorry, you ran out of guesses. The word was else. '     
     
        
    
    