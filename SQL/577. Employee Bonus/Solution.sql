SELECT e.name, b.bonus
FROM employee e
LEFT JOIN bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000
SELECT e.name, b.bonus
FROM employee e
LEFT JOIN bonus b
ON e.empId = b.empId
WHERE b.bonus < 1000
   OR b.bonus IS NULL;
   OR b.bonus IS NULL;
