class Solution(object):
    def judgeCircle(self, moves):
        if not (1<=len(moves)<=2*10**4):
            return 0
        return moves.count('U')==moves.count('D') and moves.count('L')==moves.count('R')
        
