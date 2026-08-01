<<<<<<< HEAD

uint32_t reverseBits(uint32_t n) {

    uint32_t ans = 0;

    for (int i = 0; i < 32; i++) {

        ans = (ans << 1) | (n & 1);

        n >>= 1;
    }

    return ans;
=======

uint32_t reverseBits(uint32_t n) {

    uint32_t ans = 0;

    for (int i = 0; i < 32; i++) {

        ans = (ans << 1) | (n & 1);

        n >>= 1;
    }

    return ans;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
}