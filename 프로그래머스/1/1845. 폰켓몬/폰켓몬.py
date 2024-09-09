def solution(nums):
    hash_set = set()
    
    for pokemon in nums:
        hash_set.add(hash(pokemon))
    
    unique_count = len(hash_set)
    max_selectable = len(nums) // 2
    
    return min(unique_count, max_selectable)
