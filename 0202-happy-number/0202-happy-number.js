/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
    while(n !== 1 && n !== 4) {
        let num = 0;
        while(n !== 0) {
            num += (n % 10) * (n % 10);
            n = Math.floor(n / 10);
        }
        n = num;
    }
    return n === 1;
};