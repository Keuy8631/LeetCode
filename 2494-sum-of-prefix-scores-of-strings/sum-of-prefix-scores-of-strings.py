class TrieNode:
    def __init__(self):
        self.isWord = False
        self.score = 0
        self.next = {}
class Trie:
    def __init__(self):
        self.root = TrieNode()
    def insert(self,word):
        root = self.root 
        for w in word:
            if w not in root.next:
                root.next[w] = TrieNode()
            
            root = root.next[w]
            root.score += 1
        
        root.isWord = True
        return 
    def get_score(self,word):
        ans = 0
        root = self.root 
        for w in word:
            root = root.next[w]
            ans+=root.score
        return ans
class Solution:
    def sumPrefixScores(self, words: List[str]) -> List[int]:
        trie = Trie()
        for word in words:
            trie.insert(word)
        ans = []
        for word in words:
            ans.append(trie.get_score(word))
        return ans