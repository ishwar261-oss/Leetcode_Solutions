<<<<<<< HEAD
SELECT e.name, b.bonus
FROM employee e
LEFT JOIN bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000
=======
SELECT e.name, b.bonus
FROM employee e
LEFT JOIN bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
   OR b.bonus IS NULL;