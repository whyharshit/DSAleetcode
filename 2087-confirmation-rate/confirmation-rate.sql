# Write your MySQL query statement below
SELECT s.user_id as user_id,
CASE
WHEN t2.total IS NULL THEN 0
ELSE ROUND(COALESCE(t1.confirm,0)/t2.total, 2) 
END AS confirmation_rate
FROM Signups as s
LEFT JOIN
(
SELECT user_id,count(*) AS total
FROM Confirmations
GROUP BY user_id
) AS t2 
ON s.user_id = t2.user_id
LEFT JOIN
(
SELECT user_id,count(*) AS confirm
FROM Confirmations
WHERE action = 'confirmed'
GROUP BY user_id
) AS t1 
ON s.user_id = t1.user_id