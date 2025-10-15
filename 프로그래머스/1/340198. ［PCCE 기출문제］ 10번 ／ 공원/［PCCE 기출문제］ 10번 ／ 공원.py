def solution(mats, park):
    park_h, park_w = len(park), len(park[0])
    
    mats.sort(reverse=True)
    
    for mat in mats:
        for h in range(park_h - mat + 1):
            for w in range(park_w - mat + 1):
                for del_h in range(mat):
                    if park[h + del_h][w:w + mat] != ["-1"] * mat:
                        break
                else:
                    return mat
    else:
        return -1