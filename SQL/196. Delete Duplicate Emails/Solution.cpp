<<<<<<< HEAD
DELETE p1
FROM Person p1
JOIN Person p2
ON p1.email = p2.email
=======
DELETE p1
FROM Person p1
JOIN Person p2
ON p1.email = p2.email
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
AND p1.id > p2.id;