-- Exercise Link: https://www.w3resource.com/sql-exercises/sql-joins-exercises.php#h_one
--Solution 1
SELECT
    salesman.name,
    customer.cust_name,
    customer.city
from
    salesman,
    customer
where
    salesman.city = customer.city;

--solution 2
SELECT
    a.ord_no,
    a.purch_amt,
    b.cust_name,
    b.city
FROM
    orders a,
    customer b
WHERE
    a.customer_id = b.customer_id
    AND a.purch_amt BETWEEN 500
    AND 2000;

--Solution 3
SELECT
    a.cust_name,
    a.city,
    b.name,
    b.commission
from
    customer a,
    salesman b
where
    a.salesman_id = b.salesman_id;

--4 Solution
SELECT
    a.cust_name,
    a.city,
    b.commission
from
    customer a,
    Salesman b
WHERE
    b.commission >= 0.12
    and a.salesman_id = b.salesman_id;