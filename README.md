# Get Digit Count Function Set
Basic C function set to calculate digit count of integers.

This function set (I'm making the terminology distinct from a library) performs a binary search to determine the digit count of a signed (or unsigned) 32-bit, signed 64-bit, and unsigned 64-bit integer. Three functions are provided. They are efficient enough for hot paths when optimization flags are used (but any sort of printing is always going to be slow comparatively). Either way, this is faster than division alternatives.
