TYPE=TRIGGERS
triggers='CREATE DEFINER=`root`@`localhost` TRIGGER trigger_04 BEFORE UPDATE ON employee FOR EACH ROW \n\nINSERT INTO tiggar_01 (tid,tname,tsubject,tcity,tprice ,action_perform) VALUES (old.employee_id,old.first_name,old.last_name,old.salary,old.department,"Data updated !!!")' 'CREATE DEFINER=`root`@`localhost` TRIGGER trigger_03 BEFORE DELETE ON employee FOR EACH ROW \n\nINSERT INTO tiggar_01 (tid,tname,tsubject,tcity,tprice ,action_perform) VALUES (old.employee_id,old.first_name,old.last_name,old.salary,old.department,"Data Deleted !!!")'
sql_modes=1098907648 1098907648
definers='root@localhost' 'root@localhost'
client_cs_names='utf8mb4' 'utf8mb4'
connection_cl_names='utf8mb4_unicode_ci' 'utf8mb4_unicode_ci'
db_cl_names='utf8mb4_general_ci' 'utf8mb4_general_ci'
created=1726128179942113 1726128001600100
