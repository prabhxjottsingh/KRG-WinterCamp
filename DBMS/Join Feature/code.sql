show databases;

use mysql;

create table OrderTable(
    Order_ID varchar(255),
    Item_Name varchar(255),
    Price int,
    Quantity int,
    Dispatch_Date date,
    Payment_Mode varchar(255)
);

create table Customer(
    Customer_ID varchar(255),
    Customer_Name varchar(255),
    Email varchar(255),
    Contact_Number int,
    Order_ID varchar(255)
);

insert into
    OrderTable
values
('001', 'Mobile', 14000, 10, '2022-01-23', 'UPI');

insert into
    OrderTable
values
(
        '002',
        'Television',
        42000,
        12,
        '2022-04-23',
        'Credit Card'
    );

insert into
    OrderTable
values
(
        '003',
        'Steam Iron',
        1600,
        15,
        '2022-03-14',
        'Debit Card'
    );

insert into
    OrderTable
values
(
        '004',
        'Washing Machine',
        34000,
        6,
        '2022-07-13',
        'UPI'
    );

insert into
    OrderTable
values
(
        '005',
        'Ceiling Fan',
        2600,
        14,
        '2022-07-23',
        'Cash'
    );

insert into
    Customer
Values
(
        '001',
        'Jigyasu',
        'jainjigyasu1@email.com',
        '9876543210',
        '004'
    );

insert into
    Customer
Values
(
        '002',
        'Atul',
        'bhardwajatul1@email.com',
        '9876543214',
        '002'
    );

insert into
    Customer
Values
(
        '003',
        'Karthik',
        'sidanakarthikhe@email.com',
        '9876543567',
        '003'
    );

insert into
    Customer
Values
(
        '003',
        'Karthik',
        'sidanakarthikhe@email.com',
        '9876543567',
        '005'
    );

insert into
    Customer
Values
(
        '004',
        'Yash',
        'gautamyasj@email.com',
        '9834543567',
        '001'
    );

alter table
    customer
modify
    column Contact_Number varchar(255);

select
    *
from
    OrderTable;

select
    *
from
    Customer;

inner join -- 
select
    OrderTable.order_ID,
    Customer.Order_ID
from
    OrderTable
    INNER JOIN Customer On OrderTable.order_ID = Customer.Order_ID;