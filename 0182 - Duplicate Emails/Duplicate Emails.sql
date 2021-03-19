# Write your MySQL query statement below
SELECT
    Email
FROM
    Person 
GROUP BY 1
HAVING COUNT(*) > 1
