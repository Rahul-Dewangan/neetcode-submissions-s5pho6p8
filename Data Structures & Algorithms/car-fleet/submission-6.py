class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        car = []
        for i in range(len(speed)):
            car.append((position[i], speed[i]))
        
        car.sort(reverse=True)
        # print(car)
        st = []
        for i in range(len(car)):
            time = (target - car[i][0])/car[i][1]
            if len(st) == 0:
                st.append(time)
            elif time > st[-1]:
                st.append(time)

        return len(st)