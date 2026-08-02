<<<<<<< HEAD
SELECT e.name
FROM Employee e
JOIN Employee emp
ON e.id = emp.managerId
GROUP BY e.id, e.name
=======
SELECT e.name
FROM Employee e
JOIN Employee emp
ON e.id = emp.managerId
GROUP BY e.id, e.name
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
HAVING COUNT(emp.id) >= 5;