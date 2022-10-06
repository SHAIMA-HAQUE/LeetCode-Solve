# Write your MySQL query statement below
SELECT e.name AS Employee
FROM EMPLOYEE AS e
JOIN EMPLOYEE AS m
WHERE e.salary > m.salary AND e.managerId = m.id;