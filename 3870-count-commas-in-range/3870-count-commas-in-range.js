/**
 * @param {number} n
 * @return {number}
 */
var countCommas = function(n) {
    return n >= 1000 ? n - 999 : 0;
};