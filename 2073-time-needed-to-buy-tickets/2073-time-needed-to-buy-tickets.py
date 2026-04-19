class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        q = deque()
        for ticket in tickets : 
            q.append(ticket)

        n = len(tickets)
        ans = 0
        i = 0
        while tickets[k] :
            if tickets[i] <= 0:
                i = (i +1)%n
                continue
            ans +=1
            q.popleft()
            
            if tickets[i] > 1:
                q.append(tickets[i]-1)
            tickets[i] -=1
            i= (i + 1)%n
                
        return ans

            