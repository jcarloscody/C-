#VIEWS

create view totaldepedidos as
select 
	nome as 'Cliente', 
	SUM(valor) as 'Total de Compras efetuadas na Loja'
from 
	vendas v inner join client c on v.id_client = c.id;


create view domiciliotimbauba as
select 
	nome as 'Cliente', 
	cidade as 'Cidade'
from 
	endereco e inner join client c on e.id_client = c.id
    HAVING cidade = 'timbauba';



#PROCEDURE

delimiter $$
create procedure clientpro( nome varchar(255), cpf varchar(255), situacao tinyint(1), pessoa varchar(255), cnpj varchar(255))
begin
	insert into client (nome, cpf, situacao, pessoa, cnpj) values (nome, cpf, situacao, pessoa, cnpj);
    select * from client where id = last_insert_id();
end $$
delimiter ;

call clientpro('Mazoleu de pessoa', '165615', 0, 'juridica', '5454654');





##FUNCTION

delimiter $$

create function vendas_acima_da_media(valoremanalise dec(10,2), media dec(10,2)) returns varchar(250)
begin
	declare analise varchar(250);
    set analise = case
		when valoremanalise <media then 'baixo da media'
        when valoremanalise >=media then 'acima da media'
	end;
    return analise; 
end $$

delimiter ;

select nome as 'Nome', vendas_acima_da_media(valor, 300) as 'Analise'
from vendas v inner join client c on c.id = v.id_client;





# TRIGGER
DELIMITER $

CREATE TRIGGER baixa_no_estoque AFTER INSERT
ON vendas
FOR EACH ROW
BEGIN
	UPDATE estoque SET quantidade = quantidade - NEW.quantidade
WHERE estoque.id_produto = NEW.id_produto; 
END$

insert into vendas (id_produto, quantidade) values (1, 3);