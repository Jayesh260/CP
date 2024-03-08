from typing import List

class Solution:
    def roomsRequired(self, N: int, K: int, students: List[int]) -> int:
        dp = [float('inf')] * (1 << N)
        dp[0] = 0

        for mask in range(1 << N):
            room = 0
            count = 0
            for i in range(N):
                if mask & (1 << i) == 0:
                    room = dp[mask] // K
                    count = dp[mask]
                    if count + students[i] <= K:
                        count += students[i]
                    else:
                        room += 1
                        count = students[i]
                    dp[mask | (1 << i)] = min(dp[mask | (1 << i)], room + count)
        return dp[-1] // K + int(dp[-1] % K > 0)

# Test
solution = Solution()
N = 3
K = 2
students = [1, 3, 2]
print(solution.roomsRequired(N, K, students))  # Output: 2
