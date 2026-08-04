<<<<<<< HEAD
=======
<<<<<<< HEAD
SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (
    SELECT COUNT(*)
    FROM Product
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (
    SELECT COUNT(*)
    FROM Product
<<<<<<< HEAD
);
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
);
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
