class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        # car = []
        car = [(p, s) for p, s in zip(position, speed)]
        
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