function countCommas(n: number): number {
    return n >= 1000 ? n - 999 : 0;
};