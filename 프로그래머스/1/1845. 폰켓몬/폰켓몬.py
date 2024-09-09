def solution(nums):
    unique_pokemons = set(nums)
    
    max_selectable = len(nums) // 2
    
    return min(len(unique_pokemons), max_selectable)