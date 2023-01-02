class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        count=0
        if word[0].isupper():
            for i in range(1, len(word)):
                if word[i].isupper():
                    count+=1
            if count == len(word)-1 or count == 0:
                return True
            else:
                return False
        else:
            for i in range(1, len(word)):
                if word[i].isupper():
                    return False
            return True