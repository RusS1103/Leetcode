class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        isPositive = 1 if dividend * divisor > 0 else -1
        dvd, dvs = abs(dividend), abs(divisor)
        result = 0
        while dvd >= dvs:
            temp, d = dvs, 1
            while temp << 1 <= dvd:
                temp <<= 1
                d <<= 1
            dvd -= temp
            result += d
        return min(max(result * isPositive, -2147483648), 2147483647)

