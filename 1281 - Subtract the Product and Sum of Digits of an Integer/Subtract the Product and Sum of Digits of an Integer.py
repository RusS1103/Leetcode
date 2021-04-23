class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product_of_digits = 1
        sum_of_digits = 0
        while n != 0:
            product_of_digits *= n % 10
            sum_of_digits += n % 10
            n //= 10
        return product_of_digits - sum_of_digits

