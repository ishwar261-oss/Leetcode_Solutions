<<<<<<< HEAD
=======
<<<<<<< HEAD
SELECT
    s.product_id,
    s.year AS first_year,
    s.quantity,
    s.price
FROM Sales s
JOIN (
    SELECT product_id, MIN(year) AS first_year
    FROM Sales
    GROUP BY product_id
) t
ON s.product_id = t.product_id
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
SELECT
    s.product_id,
    s.year AS first_year,
    s.quantity,
    s.price
FROM Sales s
JOIN (
    SELECT product_id, MIN(year) AS first_year
    FROM Sales
    GROUP BY product_id
) t
ON s.product_id = t.product_id
<<<<<<< HEAD
AND s.year = t.first_year;
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
AND s.year = t.first_year;
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
