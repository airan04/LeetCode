# Write your MySQL query statement below
SELECT NAME , BALANCE FROM(
SELECT u.name as NAME, SUM(t.amount) as BALANCE
FROM Users as u
INNER JOIN Transactions as t
USING(account)
GROUP BY account) as s
WHERE BALANCE > 10000