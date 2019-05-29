package Interface;

import Conexao.ConexaoMySQL;
import java.awt.event.WindowEvent;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Vector;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;

public class disciplinasForm extends javax.swing.JFrame {
/*
Instituto Federal de São Paulo - Campus Sertãozinho
Disciplina......: M3LPBD - 201901
Programação de Computadores e Dispositivos Móveis
Aluna...........: Valéria Padilha de Vargas
*/
    public disciplinasForm() {
        initComponents();
        loadTable();
    }
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        btFechar = new javax.swing.JButton();
        btExcluir = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        tblDisciplinas = new javax.swing.JTable();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Disciplinas");

        btFechar.setText("Fechar");
        btFechar.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        btFechar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btFecharActionPerformed(evt);
            }
        });

        btExcluir.setText("Excluir");
        btExcluir.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        btExcluir.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btExcluirActionPerformed(evt);
            }
        });

        tblDisciplinas.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Id", "Disciplina", "Carga Horaria", "Curso", "Vagas", "Período"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        tblDisciplinas.setToolTipText("");
        tblDisciplinas.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        tblDisciplinas.setShowHorizontalLines(false);
        tblDisciplinas.getTableHeader().setReorderingAllowed(false);
        jScrollPane1.setViewportView(tblDisciplinas);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(btExcluir)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btFechar))
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 463, Short.MAX_VALUE))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(27, Short.MAX_VALUE)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 243, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btFechar)
                    .addComponent(btExcluir))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents
    private void loadTable(){
        try{
            ((DefaultTableModel)tblDisciplinas.getModel()).setRowCount(0);
            Connection con = ConexaoMySQL.getInstance().getConnection();         
            String cmd = "SELECT * FROM disciplina";
            ResultSet res = con.createStatement().executeQuery(cmd);
            while(res.next()){
                int idDB = res.getInt("idDisciplina");
                String nomeDisciplinaDB = res.getString("nomeDisciplina");
                int cargaHorariaDB = res.getInt("cargaHoraria");
                String cursoDB = res.getString("curso");
                int vagasDB = res.getInt("vagas");
                String periodoDB = res.getString("periodo");
                Vector v = new Vector();
                v.add(idDB);
                v.add(nomeDisciplinaDB);
                v.add(cargaHorariaDB+" hora/s");
                v.add(cursoDB);
                v.add(vagasDB);
                v.add(periodoDB);
                ((DefaultTableModel)tblDisciplinas.getModel()).addRow(v);
            }
        } catch (SQLException e) {
            System.err.printf("STATUS--->Erro", e.getMessage());
        }
    }
    
    private void btExcluirActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btExcluirActionPerformed
        int i = JOptionPane.showConfirmDialog(null ,"Deseja remover a disciplina?","Excluir registro",JOptionPane.YES_NO_OPTION);
        if (i != 1) {
            try{
            String cmd = "DELETE FROM disciplina WHERE idDisciplina = '"+tblDisciplinas.getValueAt(tblDisciplinas.getSelectedRow(), 0).toString()+"'";
            Connection con = ConexaoMySQL.getInstance().getConnection();         
            con.createStatement().executeUpdate(cmd);
            } catch (SQLException e) {
                System.err.printf("STATUS--->Erro", e.getMessage());
            }
            JOptionPane.showMessageDialog(null, "Disciplina deletada!");      
        } else {            
            JOptionPane.showMessageDialog(null, "Ação cancelada!");
        }
        loadTable();
    }//GEN-LAST:event_btExcluirActionPerformed

    private void btFecharActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btFecharActionPerformed
        dispose();
    }//GEN-LAST:event_btFecharActionPerformed

    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(disciplinasForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(disciplinasForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(disciplinasForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(disciplinasForm.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new disciplinasForm().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btExcluir;
    private javax.swing.JButton btFechar;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable tblDisciplinas;
    // End of variables declaration//GEN-END:variables
}