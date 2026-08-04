<<<<<<< HEAD
SELECT
    DATE_FORMAT(trans_date, '%Y-%m') AS month,
    country,
    COUNT(*) AS trans_count,
    SUM(state = 'approved') AS approved_count,
    SUM(amount) AS trans_total_amount,
    SUM(CASE WHEN state = 'approved' THEN amount ELSE 0 END) AS approved_total_amount
FROM Transactions
GROUP BY month, country;
=======
<<<<<<< HEAD
SELECT
    DATE_FORMAT(trans_date, '%Y-%m') AS month,
    country,
    COUNT(*) AS trans_count,
    SUM(state = 'approved') AS approved_count,
    SUM(amount) AS trans_total_amount,
    SUM(CASE WHEN state = 'approved' THEN amount ELSE 0 END) AS approved_total_amount
FROM Transactions
GROUP BY month, country;
=======
select 
date_format(trans_date, '%Y-%m') as month,
country,
count(*) as trans_count,
sum(state = 'approved') as approved_count,
sum(amount) as trans_total_amount,
sum(case when state = 'approved' then amount else 0
    end)
as approved_total_amount
from transactions
group by month, country;
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
