/**
 * Project Untitled
 */

#include <iostream>
#include <mysql/mysql.h>
#include <sqlite3.h>
#include <string>
#include <stdlib.h>
#include "DB_remota.h"
#include "DB_local.h"
#include "Dato.h"
#include <sstream>
#include <stdio.h>

#define HOST "186.155.208.171"
#define USER "alseuser1"
#define PASSWD "SruC-x2x56cAcSYP40"
#define DB "alse_test.db"

using namespace std;


DB_remota::DB_remota(MYSQL msql)
{
    this->connection = NULL;
    this->mysql = msql;
    result;
    mysql_init(&mysql);
}
DB_remota::DB_remota()
{

}
bool DB_remota::guardar_dato(Dato d, int h)
{
    conectar_DB();

    stringstream sqlstream;
    int c;

    sqlstream << "INSERT INTO TBL_Datos (Hora, Temperatura, Humedad,";
    sqlstream << " Vel_viento, Dir_viento, Latitud, Longitud, Altura)";
    sqlstream << " VALUES ( ";
    sqlstream << h << ", ";
    sqlstream << d.getTemperatura() << ", ";
    sqlstream << (int)d.getHumedad() << ", ";
    sqlstream << d.getVeloviento() << ", ";
    sqlstream << d.getDirviento() << ", ";
    sqlstream << d.getLatitud() << ", ";
    sqlstream << d.getLongitud() << ", ";
    sqlstream << d.getAltura() << ");";
    c = mysql_query( connection, sqlstream );

    desconectar_DB();
    return true;
}
bool DB_remota::conectar_DB()
{
    connection = mysql_real_connect(&mysql,HOST,USER,PASSWD,DB,51000,0,0);

    if (connection == NULL) {
        cout << mysql_error(&mysql) << endl;
        return false;
    }else{ return true; }
}
bool DB_remota::desconectar_DB()
{
    mysql_free_result( result );
    mysql_close( connection );
    return true;
}
bool DB_remota::create_table()
{
    string sqlstream;
    int c;

    conectar_DB();
    sqlstream = "CREATE TABLE TBL_Datos (Hora REAL PRIMARY KEY NOT NULL, Temperatura REAL NOT NULL, Humedad INTEGER NOT NULL, Vel_viento REAL NOT NULL, Dir_viento REAL NOT NULL, Latitud REAL NOT NULL, Longitud REAL NOT NULL, Altura REAL NOT NULL)";
    c = mysql_query( connection, sqlstream.c_str() );

    desconectar_DB();
    return true;
}
