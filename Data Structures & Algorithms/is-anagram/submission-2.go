import "slices"

func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false
    }

    runeS := []rune(s)
    runeT := []rune(t)

    slices.Sort(runeS)
    slices.Sort(runeT)

    for i := 0; i < len(runeS); i++ {
        if runeS[i] != runeT[i] {
            return false
        }
    }

    return true
}
