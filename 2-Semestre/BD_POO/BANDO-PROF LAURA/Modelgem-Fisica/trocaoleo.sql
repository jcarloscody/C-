CREATE DATABASE trocaoleo;

USE trocaoleo;

CREATE TABLE employee(
id int primary key auto_increment,
nome varchar(255),
cpf text,
salario double,
situacoa boolean
);


CREATE TABLE user(
id int primary key auto_increment,
id_employee int,
username varchar(255),
perfil varchar(255),
senha varchar(255),
nivel_acesso varchar(255),
FOREIGN KEY (id_employee) REFERENCES employee (id)
);

CREATE TABLE client(
id int primary key auto_increment,
nome varchar(255),
cpf text,
situacao boolean,
pessoa varchar(255),
cnpj varchar(255)
);

CREATE TABLE supplier(
id int primary key auto_increment,
nome varchar(255),
cpf text,
situacao boolean,
pessoa varchar(255),
cnpj varchar(255)
);


CREATE TABLE contatos(
id int primary key auto_increment,
id_employee int,
id_client int,
id_supplier int,
telefone varchar(255),
email varchar(255),
linkedin varchar(255),
FOREIGN KEY (id_employee) REFERENCES employee (id),
FOREIGN KEY (id_client) REFERENCES client (id),
FOREIGN KEY (id_supplier) REFERENCES supplier (id)
);


CREATE TABLE endereco(
id int primary key auto_increment,
id_employee int,
id_client int,
id_supplier int,
rua varchar(255),
numero varchar(255),
loteamento varchar(255),
cep varchar(255),
cidade varchar(255),
uf varchar(255),
FOREIGN KEY (id_employee) REFERENCES employee (id),
FOREIGN KEY (id_client) REFERENCES client (id),
FOREIGN KEY (id_supplier) REFERENCES supplier (id)
);


CREATE TABLE produto(
id int primary key auto_increment,
id_supplier int,
descricao varchar(255),
situacao boolean,
dt_validade varchar(255),
marca varchar(255),
preco_venda double,
preco_compra double,
percentagem double,
FOREIGN KEY (id_supplier) REFERENCES supplier (id)
);

CREATE TABLE vendas(
id int primary key auto_increment,
id_employee int,
id_client int,
id_produto int,
dt_compra varchar(255),
valor double,
quantidade int,
desconto double,
tipo_transacao varchar(255),
FOREIGN KEY (id_employee) REFERENCES employee (id),
FOREIGN KEY (id_client) REFERENCES client (id),
FOREIGN KEY (id_produto) REFERENCES produto (id)
);



CREATE TABLE estoque(
id int primary key auto_increment,
id_produto int,
quantidade int,
localizacao varchar(255),
quantidade_min int,
FOREIGN KEY (id_produto) REFERENCES produto (id)
);

