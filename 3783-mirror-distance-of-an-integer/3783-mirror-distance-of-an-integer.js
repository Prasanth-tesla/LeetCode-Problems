/**
 * @param {number} n
 * @return {number}
 */
var mirrorDistance = function(n) {
    let rev = 0, num = n;

    while(num != 0) {
        rev *= 10;
        rev += num % 10;
        num = Math.floor(num / 10);
    }

    return n > rev ? n - rev : rev - n;
};