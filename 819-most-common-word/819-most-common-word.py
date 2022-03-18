class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        specialChars = "!?',;." 
        for specialChar in specialChars:
            paragraph = paragraph.replace(specialChar, ' ')
        banned = set([word.lower() for word in banned])
        words = [word.lower() for word in paragraph.split() if word.lower() not in banned]
        return max(words, key=words.count)