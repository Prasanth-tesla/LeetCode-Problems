/**
 * @param {number} n
 * @return {number}
 */
var numberOfCuts = function(n) {
    if(n === 1) return 0;
    else if(n % 2) return n;
    return n / 2;
};