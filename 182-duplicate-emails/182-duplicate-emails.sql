# Write your MySQL query statement below
SELECT DISTINCT a.email AS Email
FROM Person AS a, Person AS b
WHERE a.id <> b.id
AND a.email = b.email;
