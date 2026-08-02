<<<<<<< HEAD
SELECT w1.id
FROM weather w1
JOIN weather w2
ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
=======
SELECT w1.id
FROM weather w1
JOIN weather w2
ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
WHERE w1.temperature > w2.temperature;