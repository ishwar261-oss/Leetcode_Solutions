<<<<<<< HEAD
SELECT eu.unique_id, e.name
FROM Employees e
LEFT JOIN EmployeeUNI eu
=======
SELECT eu.unique_id, e.name
FROM Employees e
LEFT JOIN EmployeeUNI eu
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
ON e.id = eu.id;