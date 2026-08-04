<<<<<<< HEAD
=======
<<<<<<< HEAD
SELECT e.name
FROM Employee e
JOIN Employee emp
ON e.id = emp.managerId
GROUP BY e.id, e.name
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
SELECT e.name
FROM Employee e
JOIN Employee emp
ON e.id = emp.managerId
GROUP BY e.id, e.name
<<<<<<< HEAD
HAVING COUNT(emp.id) >= 5;
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
HAVING COUNT(emp.id) >= 5;
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
