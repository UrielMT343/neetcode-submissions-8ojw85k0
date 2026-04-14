import "maps"

func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false
    }

    mapS := make(map[rune]int)
    mapT := make(map[rune]int)

    for _, val := range s {
        mapS[val] += 1
    }

    for _, val := range t {
        mapT[val] += 1
    }

    return maps.Equal(mapS, mapT)
}
