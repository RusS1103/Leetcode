# Write your MySQL query statement below
SELECT 
    D.Name AS Department,
    E.Name AS Employee,
    E.Salary
FROM 
    Employee AS E
        JOIN
    Department AS D ON E.DepartmentId = D.Id
WHERE (
    (E.DepartmentId, Salary) IN
    (
        SELECT 
            DepartmentId, MAX(SALARY)
        FROM 
            Employee
        GROUP BY DepartmentId
    )
);
