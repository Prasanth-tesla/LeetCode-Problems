int findClosest(int x, int y, int z) {
    int xToZ = x > z ? x - z : z - x;
    int yToZ = y > z ? y - z : z - y;

    return (xToZ == yToZ) ? 0 : (xToZ < yToZ) ? 1 : 2;
}