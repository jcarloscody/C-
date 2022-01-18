


INSERT INTO employee (nome, cpf, salario, situacoa) values
('josue', '111111111',1000, true),
('mario', '1212412', 1000, false),
('lucas', '124323', 1000, true);



INSERT INTO user (id_employee, username, perfil, senha, nivel_acesso) values
(1, 'josue', 'adm','1111111111', 'all'),
(2, 'mario', 'vendas','222222222', 'parcial'),
(3, 'lucas', 'adm','33333333333', 'parcial');




INSERT INTO client (nome, cpf, situacao, pessoa, cnpj) values
('carlos', '2222222222',true, 'fisica', null),
('jeff', null,false, 'juridica', '222222222'),
('jose', null,true, 'fisica', '1111111111');



INSERT INTO supplier (nome, cpf, situacao, pessoa, cnpj) values
('musk', '16516',true, 'fisica', null),
('nasa', null,false, 'juridica', '8888888'),
('space today', null,true, 'fisica', '555555');



INSERT INTO contatos (id_employee, id_client, id_supplier, telefone, email, linkedin) values
(1, null, null, '1651656', 'ahk@hotmail.com','uo@link'),
(null, 2,null, '616561', 'jgj@gmail.com', null),
(null, null,3, '2165165', 'jos@gmail.com',null);



INSERT INTO endereco (id_employee, id_client, id_supplier, rua, numero, loteamento, cep, cidade, uf) values
(1, null, null, 'rua canario', '23','loteamento ozanam', '212112','timbauba', 'pb'),
(null, 2, null, 'rua stev jobs', '223','loteamento magia ', '1','macaiba', 'pe'),
(2, 3, 1, 'rua einsten', '09','loteamento cesar', '12', 'natal', 'rj');

INSERT INTO produto (id_supplier, descricao, situacao, dt_validade, marca, preco_venda, preco_compra, percentagem) values
(1, "macarrao", true, '22/11/2020', 'chinesa',22.56, 56.55,22.00);

INSERT INTO vendas (id_employee, id_client, id_produto, dt_compra, valor, quantidade, desconto, tipo_transacao) values
(1, 1, 1, '22/11/2020', 55.56,56, 10.00,"à vista");

INSERT INTO estoque (id_produto, quantidade, localizacao, quantidade_min) values
(1, 11, "PE", 10);

SELECT * 
    FROM employee;

SELECT * 
    FROM client;

SELECT * 
    FROM endereco;

SELECT * 
    FROM supplier;

SELECT * 
    FROM produto;

SELECT * 
    FROM estoque;

SELECT * 
    FROM vendas;

SELECT * 
    FROM contatos;

SELECT * 
    FROM user;



SELECT employee.nome as employee,cidade 
    FROM employee , endereco
        WHERE employee.id = endereco.id_employee AND cidade = "timbauba";

SELECT client.nome as client, cidade 
    FROM client, endereco
         WHERE client.id = endereco.id_client AND cidade = "timbauba";

SELECT supplier.nome as supplier, id_supplier,  cidade 
    FROM  supplier 
        INNER JOIN endereco e 
            ON   (supplier.id = e.id_supplier AND cidade = "timbauba");

/*
SELECT employee.nome as employee, client.nome as client, supplier.nome as supplier, cidade
    FROM  employee , client, supplier
        INNER JOIN endereco e 
            ON   (e.id_supplier = supplier.id  AND 
            e.id_client = client.id AND e.id_employee = employee.id AND cidade = "timbauba");
        INNER JOIN endereco ee 
            ON  ( e)
        INNER JOIN endereco eee 
            ON  ( ee);

SELECT endereco.id_employee, endereco.id_client, endereco.id_supplier, employee.nome as employeName, 
	   client.nome as clientName, supplier.nome as supplierName, cidade
    FROM  employee , client, supplier, endereco
        WHERE (endereco.id_supplier = supplier.id  OR
			  endereco.id_client = client.id OR
              endereco.id_employee = employee.id) AND 
              endereco.cidade = "timbauba";
*/


SELECT *
    FROM  user 
        INNER JOIN employee e 
            ON   id_employee = e.id;

SELECT *
    FROM  contatos 
        INNER JOIN employee e 
            ON   id_employee = e.id;

SELECT *
    FROM  contatos 
        INNER JOIN client e 
            ON   id_client = e.id;

SELECT *
    FROM  contatos 
        INNER JOIN supplier e 
            ON   id_supplier = e.id;




SELECT *
    FROM  produto 
        INNER JOIN supplier e 
            ON   id_supplier = e.id;



SELECT *
    FROM  vendas 
        INNER JOIN employee e 
            ON   id_employee = e.id;

SELECT *
    FROM  vendas 
        INNER JOIN client e 
            ON   id_client = e.id;

SELECT *
    FROM  vendas 
        INNER JOIN produto e 
            ON   id_produto = e.id;


SELECT *
    FROM  estoque 
        INNER JOIN produto e 
            ON   id_produto = e.id;