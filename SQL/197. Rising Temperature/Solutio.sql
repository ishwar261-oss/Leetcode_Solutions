<<<<<<< HEAD
=======
<<<<<<< HEAD
SELECT w1.id
FROM weather w1
JOIN weather w2
ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
SELECT w1.id
FROM weather w1
JOIN weather w2
ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
<<<<<<< HEAD
WHERE w1.temperature > w2.temperature;
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
WHERE w1.temperature > w2.temperature;
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
