# Write your MySQL query statement below
select Product.product_name, Sales.year, Sales.price 
from Product 
Join Sales
on Product.product_id= Sales.product_id