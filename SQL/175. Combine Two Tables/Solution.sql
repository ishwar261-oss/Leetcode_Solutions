<<<<<<< HEAD
SELECT
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
=======
SELECT
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
ON p.personId = a.personId;