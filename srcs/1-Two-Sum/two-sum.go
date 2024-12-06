func twoSum(nums []int, target int) []int {
    lookup := make(map[int]int)

    for i, num := range nums {
        complement := target - num

        if index, exists := lookup[complement]; exists {
            return [] int {index, i}
        }
        lookup[num] = i
    }

    return []int{}
}
