class ParkingSystem:
    car_type = [0] * 3
    
    def __init__(self, big: int, medium: int, small: int):
        self.car_type[0] = big
        self.car_type[1] = medium
        self.car_type[2] = small

    def addCar(self, carType: int) -> bool:
        if self.car_type[carType - 1] > 0:
            self.car_type[carType - 1] -= 1
            return True
        return False


# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)
