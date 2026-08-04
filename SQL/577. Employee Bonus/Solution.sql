<<<<<<< HEAD
=======
<<<<<<< HEAD
SELECT e.name, b.bonus
FROM employee e
LEFT JOIN bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
SELECT e.name, b.bonus
FROM employee e
LEFT JOIN bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000
<<<<<<< HEAD
   OR b.bonus IS NULL;
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
   OR b.bonus IS NULL;
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
