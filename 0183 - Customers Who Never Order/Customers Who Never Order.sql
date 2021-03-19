# Write your MySQL query statement below
SELECT
    Name as Customers
FROM 
    Customers as c
LEFT JOIN Orders o
ON c.Id = o.CustomerId
WHERE o.CustomerId IS NULL
