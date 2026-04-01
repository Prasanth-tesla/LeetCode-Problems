class Solution(object):
    def survivedRobotsHealths(self, positions, healths, directions):
        """
        :type positions: List[int]
        :type healths: List[int]
        :type directions: str
        :rtype: List[int]
        """
        robots = []

        for i in range(len(directions)):
            robots.append([positions[i], healths[i], directions[i], i])

        robots.sort(key=lambda x: x[0])

        stack = []

        for robot in robots:
            pos, hea, dir, i = robot

            if dir == 'R':
                stack.append(robot)

            else:
                cHealth = hea

                while stack and cHealth > 0 and stack[-1][2] == 'R':
                    top = stack[-1]

                    if top[1] < cHealth:
                        stack.pop()
                        cHealth -= 1

                    elif top[1] > cHealth:
                        top[1] -= 1
                        cHealth = 0

                    else:
                        stack.pop()
                        cHealth = 0

                if cHealth > 0:
                    robot[1] = cHealth
                    stack.append(robot)

        stack.sort(key=lambda x: x[3])

        result = []
        for robot in stack:
            result.append(robot[1])

        return result
