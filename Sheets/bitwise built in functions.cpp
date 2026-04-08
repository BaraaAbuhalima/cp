// 1. __builtin_popcount(x)
// Returns the number of set bits (1s) in the binary representation of x.

// 2. __builtin_popcountl(x)
// Same as __builtin_popcount, but for long integers.

// 3. __builtin_popcountll(x)
// Same as __builtin_popcount, but for long long integers.

// 4. __builtin_clz(x)
// Returns the number of leading zeros in the binary representation of x.
// This function counts how many 0 bits appear before the first 1 in the binary representation.

// 5. __builtin_clzl(x)
// Same as __builtin_clz, but for long integers.

// 6. __builtin_clzll(x)
// Same as __builtin_clz, but for long long integers.

// 7. __builtin_ctz(x)
// Returns the number of trailing zeros in the binary representation of x.
// This function counts how many 0 bits appear after the last 1 in the binary representation.

// 8. __builtin_ctzl(x)
// Same as __builtin_ctz, but for long integers.

// 9. __builtin_ctzll(x)
// Same as __builtin_ctz, but for long long integers.

// 10. __builtin_ffs(x)
// Returns the position (1-based) of the first set bit (1) in x.
// If no set bit is found, returns 0.

// 11. __builtin_ffsll(x)
// Same as __builtin_ffs, but for long long integers.

// 12. __builtin_parity(x)
// Returns the parity (even or odd) of the number of set bits (1s) in x.
// If the number of set bits is even, returns 0. If the number of set bits is odd, returns 1.

// 13. __builtin_bswap32(x)
// Swaps the bytes of a 32-bit integer x.
// This function performs byte-level reversal (e.g., 0x12345678 becomes 0x78563412).

// 14. __builtin_bswap64(x)
// Swaps the bytes of a 64-bit integer x.
// This function performs byte-level reversal (e.g., 0x1234567890ABCDEF becomes 0xEFCDAB9078563412).
