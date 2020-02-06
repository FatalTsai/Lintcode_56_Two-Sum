const twoSum = function (numbers, target) {
    var map = []
    var i;
    var res;
    for (i = 0; i < numbers.length; i++) {
        if (map.hasOwnProperty(numbers[i])) {
            res = [];
            res[0] = map[numbers[i]];
            res[1] = i;
            return res;
        }
        map[target - numbers[i]] = i;
    }
    res = [];
    return res;
}
