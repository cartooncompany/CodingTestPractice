def solution(nums):
    hash_poke = set()
    
    for i in nums:
        hash_poke.add(hash(i))
        
    pokeList = len(hash_poke)
    listLength = len(nums) // 2
    
    return min(pokeList, listLength)