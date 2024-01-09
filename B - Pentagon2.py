from collections import deque
def linear_distance(queue, element1, element2):
    index1 = queue.index(element1)
    index2 = queue.index(element2)
    return abs(index2 - index1)
def circular_distance(queue, element1, element2):
    index1 = queue.index(element1)
    index2 = queue.index(element2)
    linear_dist = abs(index2 - index1)
    circular_dist = min(linear_dist, len(queue) - linear_dist)
    return circular_dist
word1 = input()
word2 = input()
circular_queue = deque(['A', 'B', 'C', 'D', 'E'])
circular_dist1 = circular_distance(circular_queue, word1[0], word1[1])
circular_dist2 = circular_distance(circular_queue, word2[0], word2[1])
if circular_dist1 == circular_dist2:
    print("Yes")
else:
    print("No")
