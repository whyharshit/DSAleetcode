# Write your MySQL query statement below
SELECT r.contest_id AS contest_id, ROUND(COUNT(r.user_id)*100/(SELECT COUNT(*) FROM Users),2) as percentage
FROM Users as u
JOIN Register as r
ON u.user_id = r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC, contest_id ASC