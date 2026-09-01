# Write your MySQL query statement below
select w.id
from Weather as w
left join Weather as p
ON w.recordDate = DATE_ADD(p.recordDate,INTERVAL 1 DAY)
where w.temperature > p.temperature;