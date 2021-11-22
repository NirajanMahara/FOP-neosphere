create database patienttable
use patienttable
create table patient(
PId int identity(1,1)primary key,
PName varchar(50) NOT NULL,
PAge int,
PProblems varchar(200) NOT NULL,
);
insert into patient
values
('Sheety',19,'severe migrane'),
('Nitin',21,'hand facture'),
('Aditya',43,'Stomach problem'),
('Shubham',23,'head injury'),
('Nitya',56,'lungs problem'),
('Prabeen',34,'severe headache')
select * from  patient