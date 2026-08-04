<<<<<<< HEAD
=======
<<<<<<< HEAD
SELECT v.customer_id,
       COUNT(*) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
SELECT v.customer_id,
       COUNT(*) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
<<<<<<< HEAD
GROUP BY v.customer_id;
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
GROUP BY v.customer_id;
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
