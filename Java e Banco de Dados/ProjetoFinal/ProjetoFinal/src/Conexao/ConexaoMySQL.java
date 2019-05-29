package Conexao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConexaoMySQL {
/*
Instituto Federal de São Paulo - Campus Sertãozinho
Disciplina......: M3LPBD - 201901
Programação de Computadores e Dispositivos Móveis
Aluna...........: Valéria Padilha de Vargas
*/    
    private static ConexaoMySQL instance = null;
    private Connection connection = null;
    public static String status = "STATUS--->Não conectou!";
    
    private ConexaoMySQL(){
        try {
            String driverName = "com.mysql.cj.jdbc.Driver";
            Class.forName(driverName);
            String serverName = "127.0.0.1";
            String nomeBanco = "projetofinaldb";
            String url = "jdbc:mysql://"+ serverName + "/" + nomeBanco+"?useTimezone=true&serverTimezone=UTC";
            String username = "root";
            String password = "valchan";
            connection = DriverManager.getConnection(url, username, password);
             if (connection != null) {
                status = ("STATUS--->Conectado com sucesso!");
            } else {
                status = ("STATUS--->Não foi possivel realizar conexão");
            }
            System.out.printf(status);
            connection.setAutoCommit(true);
        } catch (ClassNotFoundException | SQLException e) {
            status = ("STATUS--->Erro:"+e.getMessage());
            System.out.printf(status);
        }
    }
    
    public static ConexaoMySQL getInstance(){
        if(instance == null){
            instance = new ConexaoMySQL();
        }
        return instance;
    }
    
    public java.sql.Connection getConnection(){
        return connection;
    }
}   