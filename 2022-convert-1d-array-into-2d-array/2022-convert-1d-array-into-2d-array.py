import numpy as np
class Solution:
    def construct2DArray(self, original: list[int], m: int, n: int) -> list[list[int]]:
        if len(original) != m * n:
            return []

        return np.array(original).reshape(m, n).tolist()
        