class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        # Split the string into a list of words
        words = s.split()
        
        # If the number of words and characters in the pattern are not equal, return False
        if(len(words) != len(pattern)):
            return False
        
        # Initialize empty dictionaries to map characters in the pattern to words and vice versa
        char2word = dict()
        word2char = dict()
        
        # Iterate through the pairs of characters and words
        for c, w in zip(words, pattern):
            # If the character/word is already a key in the dictionary and its corresponding value is not equal to the current word/character, return False
            if c in char2word and char2word[c] != w:
                return False
            if w in word2char and word2char[w] != c:
                return False
            # Add the character-word mapping to the char2word dictionary
            char2word[c] = w
            # Add the word-character mapping to the word2char dictionary
            word2char[w] = c
        # If the loop completes, return True
        return True